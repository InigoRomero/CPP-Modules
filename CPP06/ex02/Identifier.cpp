# include "Identifier.hpp"
# include <iostream>
# include <random>
Base *generate(void)
{
	int r = rand() % 100;

	if (r > 66)
		return (new A);
	if (r > 33)
		return (new B);
	return (new C);
}
//https://docs.microsoft.com/es-es/cpp/cpp/dynamic-cast-operator?view=msvc-160
//Este tipo de conversión nos garantiza que la conversión se realiza sí y sólo sí 
//el objeto es del tipo de destino. Para conseguir este resultado realiza una serie de
// chequeos internos, por lo que este tipo de conversión es sensiblemente más lenta que static_cast.
void identify_from_pointer(Base *p)
{
	std::cout << "[+]";
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "A";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "B";
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "C";
}

void identify_from_reference(Base &p)
{
	identify_from_pointer(&p);
}