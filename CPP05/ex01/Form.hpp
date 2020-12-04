#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form;
# include "Bureaucrat.hpp"

class Form
{
    private:
        std::string     _name;
        bool            _signed;
        int             _requiered_sign_grade;
        int             _requiered_exec_grade;
    public:
        Form();
        Form(std::string const & name, int rsg, int reg);
        Form(const Form& copy);
        virtual ~Form();
        //exceptions
        class GradeTooHighException: public std::exception {
		    virtual const char* what() const throw();
	    };
	    class GradeTooLowException: public std::exception {
		    virtual const char* what() const throw();
	    };
        class FormAlreadySignedException: public std::exception {
		    virtual const char* what() const throw();
	    };

        Form &operator=(const Form& op);
        // Getter - Setter
        std::string       getName() const;
        bool              getSigned() const;
        int               getRSG() const;
        int               getREG() const;
        
        void                checkException(int rsg, int reg);
        void                beSigned(const Bureaucrat & Bureaucrat);
};

std::ostream    &operator<<(std::ostream & out, const Form & Form);

#endif