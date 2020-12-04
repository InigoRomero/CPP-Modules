#ifndef HUMAN_HPP
# define HUMAN_HPP

#include "Brain.hpp"

class Human;

class Human
{
    public:
        Human();
        Human(const Human&);
        virtual ~Human();
        Human &operator=(const Human& op);

        Brain       &getBrain();
    
        std::string identify();

    private:
        Brain *_brain;
};

#endif