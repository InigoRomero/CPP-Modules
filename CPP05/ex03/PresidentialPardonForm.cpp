#include "PresidentialPardonForm.hpp"

std::string const &PresidentialPardonForm::_name = std::string("Presidential Pardon");

PresidentialPardonForm::PresidentialPardonForm(std::string const &target)
:
	Form(PresidentialPardonForm::_name, 25, 5), 
    _target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy)
:
	Form(copy), 
    _target(copy._target)
{}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &op)
{
	(void)op;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "[+] " << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}