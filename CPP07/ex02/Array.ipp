#include "Array.hpp"

template<typename T>
Array<T>::Array():
	_length(0), _array(nullptr)
{}

template<typename T>
Array<T>::Array(unsigned int n):
	_length(n)
{
    this->_array = new T[n]();
}

template<typename T>
Array<T>::Array(const Array& copy):
	_length(copy._length)
{
    if (copy._length > 0)
    {
        this->_array = new T[copy._length]();
        for (int i = 0; i < (int)copy._length; i++)
            this->_array[i] = copy._array[i];
    }
}

template<typename T>
Array<T>::~Array()
{
	if (this->_length > 0)
		delete[] this->_array;
}

template<typename T>
Array<T> &Array<T>::operator=(Array<T> const &op)
{   
    if (this->_length > 0)
		delete[] this->_array;
    this->_array = nullptr;
    if (op._length > 0)
    {
        this->_array = new T[op._length]();
        for (int i = 0; i < op._length; i++)
            this->_array[i] = op._array[i];
    }
    this->_length = op._length;
    return (*this);
}

template<typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= this->_length)
		throw Array::OutOfBoundsException();
	return (this->_array[index]);
}

template<typename T>
T const &Array<T>::operator[](unsigned int index) const
{
	return (operator[](index));
}

template<typename T>
unsigned int  Array<T>::size(void) const
{
	return (this->_length);
}

template<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return "Exception: index error";
}