/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiguna <maiguna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 18:36:11 by maiguna            #+#    #+#             */
/*   Updated: 2026/07/17 18:36:14 by maiguna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	std::cout << "---- SUCESS TEST ----" << std::endl;
	std::cout << "COPY & ASSIGNED TEST" << std::endl;
	try
	{
		Bureaucrat original("Original", 5);
		Bureaucrat copy(original);
		Bureaucrat assigned("Assigned", 10);

		assigned = original;
		std::cout << original << std::endl;
		std::cout << copy << std::endl;
		std::cout << assigned << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "INCREMENT & DECREMENT" << std::endl;
	try
	{
		Bureaucrat a("A", 5);
		std::cout << a << std::endl;
		a.incrementGrade();
		std::cout << a << std::endl;
		a.decrementGrade();
		std::cout << a << std::endl;
	
		Bureaucrat aDefault;
		std::cout << aDefault << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	std::cout << "---- TEST FAILURE ----" << std::endl;
	std::cout << "INCREMENT OUT OF LIMITS" << std::endl;
	try
	{
		Bureaucrat b("B", 1);
		std::cout << b << std::endl;
		b.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "DECREMENT OUT OF LIMITS" << std::endl;
	try
	{
		Bureaucrat c("C", 150);
		std::cout << c << std::endl;
		c.decrementGrade();
		
	}
	catch (const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "CONSTRUCTOR GRADE TOO HIGH" << std::endl;
	try
	{
		Bureaucrat d("TOOHIGH", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat e("TOOHIGH", -12);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "CONSTRUCTOR GRADE TOO LOW" << std::endl;
	try
	{
		Bureaucrat f("TOOLOW", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}