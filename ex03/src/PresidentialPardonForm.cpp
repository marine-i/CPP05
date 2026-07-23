//header

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("targetDefault")
{
	std::cout << "PresidentialPardonForm : Default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm : Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy) : AForm(copy), _target(copy._target)
{
	std::cout << "PresidentialPardonForm : Copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	std::cout << "PresidentialPardonForm : Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		_target = copy._target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm : Destructor called" << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute() )
		throw GradeTooLowException();

	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
