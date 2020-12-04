# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
:
    _name(""),
    _grade(150)
{}

Bureaucrat::Bureaucrat(std::string const & name, int grade)
{
    checkException(name, grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
    *this = copy;
}

Bureaucrat::~Bureaucrat(){}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception: Grade too High";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception: Grade too Low";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& op)
{
	this->_grade = op._grade;
	return (*this);
}

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade() << ".";
    return (out);
}

// Getter - Setter
std::string Bureaucrat::getName() const {return(this->_name);} 
int Bureaucrat::getGrade() const {return(this->_grade);} 

void    Bureaucrat::checkException(std::string name, int grade)
{
    if (grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
    this->_name = name;
    this->_grade = grade;
}

void Bureaucrat::incrementGrade(void)
{
	this->_grade--;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(void)
{
	this->_grade++;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) const
{
	if (form.getRSG() < this->_grade)
		throw Bureaucrat::GradeTooLowException();
	else if(!form.getSigned())
		std::cout << "[+] " << *this << " signs " << form << std::endl;
	form.beSigned(*this);
}