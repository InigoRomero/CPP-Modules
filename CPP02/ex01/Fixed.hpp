#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string.h>
# include <cmath>

class Fixed;

class Fixed
{
    private:
        int                 value;
        const static int    fractionnal_bits = 8;
    public:
        Fixed();
        Fixed(const int integer);
        Fixed(const float floater);
        Fixed(const Fixed& copy);
        virtual ~Fixed();
        Fixed &operator=(const Fixed& op);

		// Getter - Setter
        int getRawBits(void) const;
        void setRawBits(int const raw);
        
        float toFloat(void) const;
        int toInt(void) const;
};
//Operador = estoy haciendo un overload a << con la entrada de un std::ostream &out y const Fixed &fixe
//Overload = Estoy añadiendo una llamada más sin borrar lo anterior para cuando lleguen esas funciones entre
//Overload Ejemeplo : persona(int peso) persona(char* ColorDePelo) , las dos la misma funcion y depende que parametro llegue entrara en una u otra
std::ostream &operator<<(std::ostream &out, const Fixed &fixe);

#endif