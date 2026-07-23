
#include "../include/Intern.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern : Default constructor called" << std::endl;
}


Intern::Intern(const Intern& copy)
{
	(void)copy;
	std::cout << "Intern : Copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern& copy)
{
	std::cout << "Intern : Copy assignment operator called" << std::endl;
	(void)copy;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern : Destructor called" << std::endl;
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	int	j = -1;
	std::string	forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (size_t i = 0; i < 3; i++)
	{
		if (forms[i] == name)
			j = i;
	}
	switch (j)
	{
	case 0:
		std::cout << "Intern creates " << name << std::endl;
		return (new ShrubberyCreationForm(target));

	case 1:
		std::cout << "Intern creates " << name << std::endl;
		return (new RobotomyRequestForm(target));

	case 2:
		std::cout << "Intern creates " << name << std::endl;
		return (new PresidentialPardonForm(target));
	default:
		std::cerr << "Intern could not create form " << name << std::endl;
		return (NULL);
	}
}
