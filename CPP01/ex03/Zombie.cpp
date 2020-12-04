#include "Zombie.hpp"
//default Constructor
Zombie::Zombie() {}
//Constructor con datos
Zombie::Zombie(std::string name, std::string type)
:
	_name(name),
	_type(type)
{}

//Destructor
Zombie::~Zombie() {}

Zombie & Zombie::operator=(const Zombie& op)
{
	if (this == &op)
		return (*this); 
	this->_name = op._name;
	this->_type = op._type;
	return (*this);
}
// GETTER - SETTER
std::string Zombie::get_Name()                                { return (this->_name);}
std::string Zombie::get_Type()                               { return (this->_type);}

void Zombie::set_Name(std::string name)                       {this->_name = name;}
void Zombie::set_Type(std::string type)                     {this->_type = type;}


void Zombie::announce()
{
  	std::cout << "<" << get_Name() << " (" << get_Type() << ")> Cereboloooos......" << std::endl;
}
