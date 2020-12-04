# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	//Form to high
	try
	{
		Form form("Plebe", 150, 0);
		std::cout << "[+] " << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//Form to low
	try
	{
		Form form("Apple", 151, 1);
		std::cout << "[+] " << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//correct Form with function beSigned
	Form form("Permisos", 42, 42);
	std::cout << "[+] " << form << std::endl;
	Bureaucrat ricardo("Ricardo", 42);
	Bureaucrat pepe("Pepe", 43);

	//Grade to low
	try
	{
		form.beSigned(pepe);
		std::cout << "[+] " << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}

	//good grade to sing
	try
	{
		form.beSigned(ricardo);
		std::cout << "[+] " << form << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//correct Form with function singForm
	Form form2("Permisos", 1, 1);
	std::cout << "[+] " << form2 << std::endl;
	Bureaucrat ricardo2("RicardoGod", 1);
	Bureaucrat pepe2("Pepe", 43);

	//Grade to low
	try
	{
		pepe2.signForm(form2);
		std::cout << "[+] " << form2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}

	//good grade to sing
	try
	{
		ricardo2.signForm(form2);
		std::cout << "[+] " << form2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	//try to firm alredy firmed form
	try
	{
		ricardo2.signForm(form2);
		std::cout << "[+] " << form2 << std::endl;
	}
	catch(std::exception const &e)
	{
		std::cerr << "[+] " << e.what() << std::endl;
	}
	return (0);
}