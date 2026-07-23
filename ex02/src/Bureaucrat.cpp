
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat : Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
	std::cout << "Bureaucrat : Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
	std::cout << "Bureaucrat : Copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	std::cout << "Bureaucrat : Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_grade = copy._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat : Destructor called" << std::endl;
}

std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	return (out);
}

void	Bureaucrat::signForm(AForm& form)
{
	try
	{
		if (form.isSigned())
		{
			std::cout << form.getName() << " is already signed " << std::endl;
			return ;
		}
		form.beSigned(*this);
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(AForm const& form) const
{
	try
	{
		form.execute(*this);
		std::cout << getName() << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << getName() << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
	}
	
}
