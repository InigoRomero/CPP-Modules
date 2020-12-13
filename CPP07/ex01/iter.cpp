# include <iostream>
# include <random>
using namespace std;

template <typename tipo, typename func> 
void iter(tipo *address, size_t length, func function){
    for (size_t i = 0; i < length; i++)
        function(address[i]);
}

void sum(int i)
{
     cout << " + " << i << " + ";
}

int main()
{
    int foo [5] = { 16, 2, 77, 40, 12071 };

    for (size_t i = 0; i < 5; i++)
        cout << " - " << foo[i] << " - ";
    cout << endl;
    size_t i = 5;
    iter(foo, i, &sum);
    cout << endl;

    return (0);
}