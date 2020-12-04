
#include "pony.hpp"

/*
** @brief Create a Pony on the heap.
*/
void    poneyOnTheHeap()
{
    Pony *pony_heap = new Pony("Rosalia", "Rojo", "32", "infinito", "FMA");
    pony_heap->show();
    delete pony_heap;
}

/*
** @brief Create a Pony on the stack.
*/
void    poneyOnTheStack() 
{
    Pony poney_stack("Iñigo", "Verde", "32", "300", "FMA");
    poney_stack.show();
}

int main()
{
    //  Heap
    std::cout << "On Heap:" << std::endl;
    poneyOnTheHeap();
    std::cout << std::endl;

    //  Stack
    std::cout << "On Stack:" << std::endl;
    poneyOnTheStack();
    std::cout << std::endl;
}