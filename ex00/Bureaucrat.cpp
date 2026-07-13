#include "Bureaucrat.hpp"

Bureaucrate::Bureaucrate(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrate : Default constructor called" << std::endl;
}

Bureaucrate::Bureaucrate(const Bureaucrate& copy)
{
	std::cout << "Bureaucrate : Default copy constructor called" << std::endl;
	*this = copy;
}

const Bureaucrate& Bureaucrate::operator=(const Bureaucrate& copy)
{
	std::cout << "Bureaucrate : Copy assignment operator called" << std::endl;
	if (this == &copy)
		return *this;
	_grade = copy._grade;
	return *this;
}

Bureaucrate::~Bureaucrate()
{
	std::cout << "Bureaucrate : Destructor called" << std::endl;
}


std::string	Bureaucrate::getName() const
{
	return this->_name;
}

int	Bureaucrate::getGrade() const
{
	return this->_grade;
}

std::ostream&	operator<<(std::ostream& out, Bureaucrate const& bureaucrate)
{
	out << bureaucrate.getName() << " bureaucrate grade " << bureaucrate.getGrade() << std::endl;
	return (out);
}
