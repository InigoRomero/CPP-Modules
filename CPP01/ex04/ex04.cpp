#include <iostream>
#include <string>

//https://www.zator.com/Cpp/E4_2_3.htm

int main()
{
    std::string str = "HI THIS IS BRAIN";
    
    std::string *p_str = &str;
    std::string &ref_str = str;

    std::cout << "Usando puntero : " << *p_str << std::endl;
    std::cout << "Usando referencia : " << ref_str << std::endl;
}