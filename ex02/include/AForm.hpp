//header
#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		const int			_gradeToSign;
		const int			_gradeToExecute;
		bool				_isSigned;

	public:
		AForm(void);
		AForm(const std::string& name, const int gradeToSign, const int gradeToExecute);
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
		virtual ~AForm();

		void		beSigned(Bureaucrat const& bureaucrat);
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		std::string	getName() const;
		bool		isSigned() const;

		virtual void	execute(Bureaucrat const& executor) const = 0;

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
		class FormNotSignedException: public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream& operator<<(std::ostream& out, AForm const& Form);

#endif