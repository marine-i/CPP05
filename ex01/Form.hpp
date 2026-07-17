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

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSigne;
		const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& out, Form const& Form);

#endif