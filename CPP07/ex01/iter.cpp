# include <iostream>
# include <random>

template <typename tipo> 
void iter(tipo *address, size_t length, void (*function)(tipo const &elt)){
    for (size_t i = 0; i < length; i++)
        (*function)(address[i]);
}

template<typename T>
void sum(T const &i)
{
     std::cout << " + " << i << " + ";
}

int main()
{
    int foo [5] = { 16, 2, 77, 40, 12071 };
    float floatR[5] = { 0.0f, 1.1f, 2.2f, 3.3f, 4.4f };
	double doubleR[5] = { 0.00, 1.11, 2.22, 3.33, 4.44 };
    
    size_t i = 5;
    iter(foo, i, &sum);  std::cout << std::endl;
    iter(floatR, 5, &sum);  std::cout << std::endl;
    iter(doubleR, 5, &sum);  

    return (0);
}