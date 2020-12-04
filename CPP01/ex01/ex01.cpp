# include <iostream>

void memoryLeak()
{
	std::string* panthere = new std::string("String panthere");
	std::cout << *panthere << std::endl;
	delete panthere;
}
// Para mirar leaks
/*int main()
{
	memoryLeak();
	system("leaks a.out");
}*/