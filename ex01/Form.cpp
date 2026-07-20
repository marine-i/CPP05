/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiguna <maiguna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 18:37:21 by maiguna            #+#    #+#             */
/*   Updated: 2026/07/17 18:37:22 by maiguna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <string>

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute), _isSigned(false)
{
	std::cout << "Form : Default constructor called" << std::endl;
}

Form::Form(const Form& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute)
{
	std::cout << "Form : Default copy constructor called" << std::endl;
	*this = copy;
}

const Form& Form::operator=(const Form& copy)
{
	std::cout << "Form : Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_isSigned = copy._isSigned;
	return *this;
}

Form::~Form()
{
	std::cout << "Form : Destructor called" << std::endl;
}

//getter

void	Form::beSigned(Bureaucrat const& bureaucrate)
{

}

std::ostream& operator<<(std::ostream& out, Form const& form)
{
	(void)form;
	out << "form signed";
	return (out);
}

