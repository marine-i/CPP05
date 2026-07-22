/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiguna <maiguna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 18:37:38 by maiguna            #+#    #+#             */
/*   Updated: 2026/07/17 18:37:40 by maiguna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	std::cout << "---- SUCESS TEST ----" << std::endl;
	try
	{
		Bureaucrat a("A", 10);
		Form validForm("Valid Form", 10, 10);

		std::cout << validForm << std::endl;
		a.signForm(validForm);
		std::cout << validForm << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
		try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat intern("Intern", 150);
		Form contrat("contrat", 1, 1);

		intern.signForm(contrat);
		std::cout << contrat << std::endl;
		boss.signForm(contrat);
		std::cout << contrat << std::endl;
		boss.signForm(contrat);

	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "---- FAIL TEST ----" << std::endl;
	std::cout << "INVALID FORM" << std::endl;
	try
	{
		Form tooHigh("TooHigh", 0, 50);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		Form tooLow("TooLow", 50, 152);
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}