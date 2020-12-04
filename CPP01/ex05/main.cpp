#include "Human.hpp"

int main()
{
    Human       bob;
	//Declaramos la variable Human el cual tiene el atributo constante Brain y llamamos a identify el cual llama
	// al identify de Brain y llamamos a getbrain el cual por referencia devuelve el cerebro.
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}