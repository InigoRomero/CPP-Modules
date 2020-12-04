#include "Human.hpp"

//https://stackoverflow.com/questions/23776784/use-of-operator-before-a-function-name-in-c/23777436#:~:text=In%20C%2B%2B%2C%20when%20the,return%20an%20int%20by%20reference.
//Constructor por defecto hacemos que cree un objeto de clase cerebro para que este inicializado.
Human::Human()
:
    _brain(new Brain())
{}

Human::Human(const Human& copy)
:
    _brain(copy._brain)
{}

Human::~Human() { delete this->_brain; }

Human &Human::operator=(const Human& op)
{
    if (this == &op)
        return (*this);
    this->_brain = op._brain;
    return (*this);
}
// Añadimos el & para que la función devuelva la referencia.
Brain       &Human::getBrain() { return (*this->_brain); }

std::string Human::identify() { return (this->getBrain().identify()); }