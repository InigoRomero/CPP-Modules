#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string.h>

class Fixed;

class Fixed
{

    public:
        Fixed();
        Fixed(const Fixed& copy);
        virtual ~Fixed();
        Fixed &operator=(const Fixed& op);

		// Getter - Setter
        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int                 value;
        const static int    fractionnal_bits = 8;
};

#endif