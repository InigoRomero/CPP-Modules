#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <string>
# include <fstream>
# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		ShrubberyCreationForm();
		std::string const _target;
		static std::string const _tree;

	public:
		ShrubberyCreationForm(std::string const &target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &op);

		static std::string const &_name;

		class TargetFileOpenException: public std::exception {
			virtual const char* what() const throw();
		};
		class WriteException: public std::exception {
			virtual const char* what() const throw();
		};

		void execute(Bureaucrat const &executor) const;
};

#endif