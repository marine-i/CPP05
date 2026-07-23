
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"
#include "../include/RobotomyRequestForm.hpp"
#include "../include/PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::cout << "---- TESTS ----" << std::endl;
	std::srand(std::time(NULL));

	try
	{
		Bureaucrat boss("Boss", 15);
		Bureaucrat intern;
		ShrubberyCreationForm form;

		std::cout << form << std::endl;

		intern.signForm(form);
		boss.signForm(form);
		intern.executeForm(form);
		boss.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// try
	// {
	// 	Bureaucrat chief("Chief", 15);
	// 	RobotomyRequestForm form;

	// 	std::cout << form << std::endl;

	// 	chief.signForm(form);
	// 	chief.executeForm(form);
	// 	chief.executeForm(form);
	// 	chief.executeForm(form);
	// 	chief.executeForm(form);
	// 	chief.executeForm(form);

	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }
	
	// try
	// {
	// 	Bureaucrat boss("Boss", 1);
	// 	Bureaucrat manager("Manager", 20);
	// 	PresidentialPardonForm form("prisonner");

	// 	std::cout << form << std::endl;

	// 	manager.signForm(form);
	// 	manager.executeForm(form);
	// 	boss.executeForm(form);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << std::endl;
	// }

	return (0);
}