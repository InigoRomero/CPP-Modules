#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <exception>
# include <cctype>

template<typename T>
class Array
{
    private:
        unsigned int _length;
        T *_array;
    public:
        Array();
        Array(unsigned int n);
        Array(Array<T> const &copy);
        virtual ~Array();

        //exceptions
        class OutOfBoundsException: public std::exception {
            virtual const char* what() const throw();
        };

        //operators
        Array &operator=(Array const &op);
        T &operator[](unsigned int index);
        T const &operator[](unsigned int index) const;

        unsigned int size(void) const;
};

# include "Array.ipp"

#endif