//header

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string& target);
		ShrubberyCreationForm(const ShrubberyCreationForm& copy);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& copy);
		virtual ~ShrubberyCreationForm();


		void	execute(Bureaucrat const &executor) const;

		class NotCreateFileException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		
		};

};

#endif