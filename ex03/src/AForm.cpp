
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

AForm::AForm(void) : _name("default"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false)
{
	std::cout << "AForm : Default constructor called" << std::endl;
}

AForm::AForm(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), 
_gradeToExecute(gradeToExecute), _isSigned(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1) 
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "AForm : Constructor called" << std::endl;
}

AForm::AForm(const AForm& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned)
{
	std::cout << "AForm : Copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm& copy)
{
	std::cout << "Form : Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_isSigned = copy._isSigned;
	return *this;
}

AForm::~AForm()
{
	std::cout << "Form : Destructor called" << std::endl;
}

std::string	AForm::getName() const
{
	return this->_name;
}

int	AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	AForm::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

bool	AForm::isSigned() const
{
	return this->_isSigned;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void	AForm::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, AForm const& form)
{
	out << "Name: " << form.getName() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to excecute: " << form.getGradeToExecute() << ", Is signed: " << form.isSigned();
	return (out);
}

