//header

#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137), _target("targetDefault")
{
	std::cout << "ShrubberyCreationForm : Default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm : Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy) : AForm(copy), _target(copy._target)
{
	std::cout << "ShrubberyCreationForm : Copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm : Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		AForm::operator=(copy);
		_target = copy._target;
	}
	return *this;
}

const char *ShrubberyCreationForm::NotCreateFileException::what() const throw()
{
	return "Could not create Shrubbery file";
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->isSigned())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute() )
		throw GradeTooLowException();

	std::string outfile(this->_target);
	outfile += "_shrubbery";
	std::ofstream out(outfile.c_str());
	if (!out)
		throw NotCreateFileException();

	out << "       /\\\n";
	out << "      /**\\\n";
	out << "     /****\\\n";
	out << "    /******\\\n";
	out << "   /********\\\n";
	out << "       ||\n";
	out << "       ||\n";
	out.close();
}
