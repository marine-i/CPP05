
#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>

class AForm;

class Intern
{
	public:
		Intern(void);
		Intern(const Intern& copy);
		Intern& operator=(const Intern& copy);
		~Intern();

		AForm*	makeForm(std::string name, std::string target);
};

#endif
