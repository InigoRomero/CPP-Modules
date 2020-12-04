#ifndef IDENTIFIER_HPP
# define IDENTIFIER_HPP

# include <iostream>
# include <random>
# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base *generate(void);

void identify_from_pointer(Base *p);
void identify_from_reference(Base &p);

#endif