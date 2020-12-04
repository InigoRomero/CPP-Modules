# include "Form.hpp"

Form::Form()
:
    _name(""),
    _signed(0),
    _requiered_sign_grade(1),
    _requiered_exec_grade(1)
{}

Form::Form(std::string const & name, int rsg, int reg)
{
    checkException(rsg, reg);
    this->_name = name;
    this->_signed = false;
    this->_requiered_sign_grade = rsg;
    this->_requiered_exec_grade = reg;
}

Form::Form(const Form& copy)
{
    *this = copy;
}

Form::~Form(){}

Form &Form::operator=(const Form& op)
{
    checkException(op._requiered_sign_grade, op._requiered_exec_grade);
	this->_name = op._name;
    this->_signed = false;
    this->_requiered_sign_grade = op._requiered_sign_grade;
    this->_requiered_exec_grade = op._requiered_exec_grade;
	return (*this);
}

std::ostream    &operator<<(std::ostream & out, const Form & Form)
{
    if (Form.getSigned())
        out << "Form " << Form.getName() << " -- Firmed -- " << Form.getRSG() << " grade required to sing -- " << Form.getREG() << " grade required to execute -- ";
    else
         out << "Form " << Form.getName() << " -- NOT Firmed -- " << Form.getRSG() << " grade required to sing -- " << Form.getREG() << " grade required to execute -- ";
    return (out);
}

// Getter - Setter
std::string Form::getName() const {return(this->_name);} 
bool Form::getSigned() const {return(this->_signed);} 
int Form::getRSG() const {return(this->_requiered_sign_grade);} 
int Form::getREG() const {return(this->_requiered_exec_grade);} 

void    Form::checkException(int rsg, int reg)
{
    if (rsg <= 0 || reg <= 0)
		throw Form::GradeTooHighException();
	else if (rsg > 150 || reg > 150)
		throw Form::GradeTooLowException();
}

void                Form::beSigned(const Bureaucrat & Bureaucrat)
{
	if (Bureaucrat.getGrade() > this->_requiered_sign_grade)
		throw Form::GradeTooLowException();
	else if (this->_signed)
		throw Form::FormAlreadySignedException();
	this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

const char* Form::FormAlreadySignedException::what() const throw()
{
	return "Exception: The Form is already signed";
}
