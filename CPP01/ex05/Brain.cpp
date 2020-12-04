#include "Brain.hpp"
#include <sstream>
//default Constructor
Brain::Brain() {}
//Constructor con datos
Brain::Brain(std::string iq)
:
	_iq(iq)
{}

//Destructor
Brain::~Brain() {}

Brain & Brain::operator=(const Brain& op)
{
	if (this == &op)
		return (*this); 
	this->_iq = op._iq;
	return (*this);
}
// GETTER - SETTER
std::string Brain::get_IQ()                                { return (this->_iq);}

void Brain::set_IQ(std::string iq)                       {this->_iq = iq;}

std::string Brain::identify()
{
	//string stream para poder almacenar la dirección
    std::stringstream address;
	//guardamos la memoria
    address << this;
    return (address.str());
}
