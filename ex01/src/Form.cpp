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
#include "Bureaucrat.hpp"
#include <string>

Form::Form(void) : _name("default"), _gradeToSign(150), _gradeToExecute(150), _isSigned(false)
{
	std::cout << "Form : Default constructor called" << std::endl;
}

Form::Form(const std::string& name, const int gradeToSign, const int gradeToExecute) : _name(name), _gradeToSign(gradeToSign), 
_gradeToExecute(gradeToExecute), _isSigned(false)
{
	if (gradeToSign < 1 || gradeToExecute < 1) 
		throw GradeTooHighException();
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	std::cout << "Form : Constructor called" << std::endl;
}

Form::Form(const Form& copy) : _name(copy._name), _gradeToSign(copy._gradeToSign), _gradeToExecute(copy._gradeToExecute), _isSigned(copy._isSigned)
{
	std::cout << "Form : Copy constructor called" << std::endl;
}

Form& Form::operator=(const Form& copy)
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

std::string	Form::getName() const
{
	return this->_name;
}

int	Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int	Form::getGradeToExecute() const
{
	return this->_gradeToExecute;
}

bool	Form::isSigned() const
{
	return this->_isSigned;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade Too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade Too Low";
}

void	Form::beSigned(Bureaucrat const& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::ostream& operator<<(std::ostream& out, Form const& form)
{
	out << "Name: " << form.getName() << ", Grade to sign: " << form.getGradeToSign() << ", Grade to excecute: " << form.getGradeToExecute() << ", Is signed: " << form.isSigned();
	return (out);
}

