/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiguna <maiguna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 18:37:30 by maiguna            #+#    #+#             */
/*   Updated: 2026/07/17 18:37:32 by maiguna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>

#include "Bureaucrat.hpp"

class Form
{
	private:
	const std::string	_name;
	const int			_gradeToSign;
	const int			_gradeToExecute;
	bool				_isSigned;

	public:
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(const Form& copy);
		const Form& operator=(const Form& copy);
		~Form();
		void	beSigned(Bureaucrat const& bureaucrate);
};

std::ostream& operator<<(std::ostream& out, Form const& Form);

#endif