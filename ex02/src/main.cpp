
#include "../include/Bureaucrat.hpp"
#include "../include/AForm.hpp"
#include "../include/ShrubberyCreationForm.hpp"

int	main(void)
{
	std::cout << "---- SUCESS TEST ----" << std::endl;
	try
	{
		Bureaucrat a("A", 15);
		ShrubberyCreationForm b;

		a.signForm(b);
		a.executeForm(b);
		// std::cout << validForm << std::endl;
		// a.signForm(validForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	// 	try
	// {
	// 	Bureaucrat boss("Boss", 1);
	// 	Bureaucrat intern("Intern", 150);
	// 	Form contrat("contrat", 1, 1);

	// 	intern.signForm(contrat);
	// 	std::cout << contrat << std::endl;
	// 	boss.signForm(contrat);
	// 	std::cout << contrat << std::endl;
	// 	boss.signForm(contrat);

	// }
	// catch (const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << "---- FAIL TEST ----" << std::endl;
	// std::cout << "INVALID FORM" << std::endl;
	// try
	// {
	// 	Form tooHigh("TooHigh", 0, 50);
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// try
	// {
	// 	Form tooLow("TooLow", 50, 152);
	// }
	// catch (const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	return (0);
}