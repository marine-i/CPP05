#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrat a("A", -1);
		// Bureaucrat b("B", 151);
		Bureaucrat c("C", 150);

		// std::cout << a;
		// std::cout << b;

		std::cout << c;
		c.incrementGrade();
		std::cout << c;
		c.decrementGrade();
		std::cout << c;
		c.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}