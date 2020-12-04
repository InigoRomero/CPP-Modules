#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <unordered_set>
# include <string>
# include <cassert>

class Intern;

class Intern
{
    public:
        Intern();
        Intern(const Intern&);
        virtual ~Intern();
        Intern &operator=(const Intern& op);
        //exceptions
        class FormDoesntExists: public std::exception {
		    virtual const char* what() const throw();
	    };
        Form*        makeForm(std::string const & form_name, std::string const & target);
};

#endif