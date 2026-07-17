#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		// Bureaucrate a("A", -1);
		// Bureaucrate b("B", 151);
		Bureaucrate c("C", 15);

		// std::cout << a;
		// std::cout << b;
		std::cout << c;


		//code a tester
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}