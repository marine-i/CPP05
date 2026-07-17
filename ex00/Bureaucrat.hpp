#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		const Bureaucrat& operator=(const Bureaucrat& copy);
		~Bureaucrat();
		std::string getName() const;
		int			getGrade() const;
		void		incrementGrade();
		void		decrementGrade();
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade Too High";
				}
		};
		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return "Grade Too Low";
				}
		};
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const& Bureaucrat);

#endif
