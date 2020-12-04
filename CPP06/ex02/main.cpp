#include <iostream>
#include "Identifier.hpp"

int main(void)
{
	srand(time(NULL));

	Base *p = generate();
	identify_from_pointer(p);
	std::cout << "     --From Pointer" << std::endl;;
	identify_from_reference(*p);
	std::cout << "     --From Reference" << std::endl;
	delete p;

	return (0);
}