
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include "../include/Intern.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::cout << "---- TESTS ----" << std::endl;
	std::srand(std::time(NULL));

	Intern		someRandomIntern;
	Bureaucrat	boss("Boss", 1);
	AForm* rrf;

	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	rrf = someRandomIntern.makeForm("invalid form", "Bender");
	if (rrf)
	{
		boss.signForm(*rrf);
		boss.executeForm(*rrf);
		delete rrf;
	}

	return (0);
}