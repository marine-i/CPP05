#ifndef BUREAUCRATE_HPP
#define BUREAUCRATE_HPP

#include <string>
#include <iostream>
#include <exception>

class Bureaucrate
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrate(std::string name, int grade);
		Bureaucrate(const Bureaucrate& copy);
		const Bureaucrate& operator=(const Bureaucrate& copy);
		~Bureaucrate();
		std::string getName() const;
		int			getGrade() const;
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

std::ostream&	operator<<(std::ostream& out, Bureaucrate const& bureaucrate);

#endif
