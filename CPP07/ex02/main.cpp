#include <iostream>
#include <string>
#include "Array.hpp"


int main()
{
    // test with ints
    Array<int> ints(3);

    ints[0] = 2;
    std::cout << "[*][*] Simple Ints [*][*]" << std::endl; 
    std::cout << "[+] " << ints[0] << std::endl;
    
    Array<int> ints2(ints);
    ints2[0] = 5;
    std::cout << "[*][*] Operador copy crea un objeto en otra dirección de memoria [*][*]" << std::endl; 
    std::cout << "[+] " << ints[0] << " ,"<< ints2[0] << std::endl;
    std::cout << "[*][*]  Exception Fuera de rango [*][*]" << std::endl;

    try
    {
        std::cout << "[+] " << ints[4] << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
    //test with strings
    Array<std::string> strings(3);
    const std::string test[3] = { "Jaime", "Perro", "Loco"};
    for (int i = 0; i < (int)strings.size(); i++)
        strings[i] = test[i];
    std::cout << "[*][*] Simple Strings [*][*]" << std::endl; 
    for (int i = 0; i < (int)strings.size(); i++)
    std::cout << "[+] " << strings[i] << std::endl;

    Array<std::string> strings2(strings);
    strings2[0] = "adios";
    std::cout << "[*][*] Operador copy crea un objeto en otra dirección de memoria [*][*]" << std::endl; 
    std::cout << "[+] " << strings[0] << " ,"<< strings2[0] << ", "<< strings2[1]<< std::endl;
    std::cout << "[*][*]  Exception Fuera de rango [*][*]" << std::endl;

    try
    {
        std::cout << "[+] " << strings[4] << std::endl;
    }
    catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return (0);
}