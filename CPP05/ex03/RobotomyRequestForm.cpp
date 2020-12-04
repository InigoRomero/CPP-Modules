#include "RobotomyRequestForm.hpp"

std::string const &RobotomyRequestForm::_name = std::string("Robotomy Request");

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
:
	Form(RobotomyRequestForm::_name, 72, 45),
     _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy)
:
	Form(copy), 
    _target(copy._target)
{}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &op)
{
	(void)op;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "[+] ...PRRRRRR PRRRRRR... " << std::endl;
	if ((rand() % 100) > 50)
		std::cout << "[+] "<< this->_target << " robotomized successfully" << std::endl;
	else
		std::cout << "[+] "<< this->_target << "[+] robotomization failed" << std::endl;
}