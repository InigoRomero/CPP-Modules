# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat ricardo("Ricardo", 42);
    ricardo.incrementGrade();
    std::cout << ricardo << std::endl;
    ricardo.decrementGrade();
    std::cout << ricardo << std::endl;
    ricardo.incrementGrade();

	try
	{
		Bureaucrat plebe("Plebe", 150);
		std::cout << plebe << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
	{
		Bureaucrat Basura("Basura", 151);
		std::cout << Basura << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
	{
		Bureaucrat dios("Dios", 0);
		std::cout << dios << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

    try
	{
		Bureaucrat dios("Dios", 1);
		std::cout << dios << std::endl;
        dios.incrementGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat plebe("Plebe", 150);
		std::cout << plebe << std::endl;
        plebe.decrementGrade();
	}
	catch(std::exception const &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}