#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string.h>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
    private:
        Bureaucrat();
        std::string _name;
        int         _grade;

    public:
        Bureaucrat(std::string const & name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        virtual ~Bureaucrat();
        //exceptions
        class GradeTooHighException: public std::exception {
		    virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
        
        Bureaucrat &operator=(const Bureaucrat& op);

        // Getter - Setter
        std::string         getName() const;
        int                 getGrade() const;

        void                checkException(std::string name, int grade);
        void                incrementGrade(void);
	    void                decrementGrade(void);
        void                signForm(Form &form) const;

};

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & Bureaucrat);

#endif