#include "ShrubberyCreationForm.hpp"

std::string const &ShrubberyCreationForm::_name = std::string("Shrubbery Creation");

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &_target)
:
	Form(ShrubberyCreationForm::_name, 145, 137), 
    _target(_target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy)
:
	Form(copy), 
    _target(copy._target)
{}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &op)
{
	(void)op;
	return (*this);
}

const char* ShrubberyCreationForm::TargetFileOpenException::what() const throw()
{
	return "Exception: Cannot open file";
}

const char* ShrubberyCreationForm::WriteException::what() const throw()
{
	return "Exception: Error while writing to the file";
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::string const shrub_name = (this->_target + "_shrubbery");
	std::ofstream outfile(shrub_name, std::ios::out | std::ios::app);

	if (!outfile.is_open() || outfile.bad())
		throw TargetFileOpenException();
	for (int i = 0; i < 3; i++)
	{
		outfile << ShrubberyCreationForm::_tree;
		if (outfile.bad())
		{
			outfile << std::endl;
			outfile.close();
			throw WriteException();
		}
	}
	outfile << std::endl;
	outfile.close();
}

std::string const ShrubberyCreationForm::_tree = 
"    _\\/_\n" \
"     /\\ \n" \
"     /\\ \n" \
"    /  \\ \n" \
"    /~~\\o \n" \
"   /o   \\ \n" \
"  /~~*~~~\\ \n" \
" o/    o \\ \n" \
" /~~~~~~~~\\~`\n" \
"/__*_______\\ \n" \
"     || \n"  \
"   \\====/ \n" \
"    \\__/\n";