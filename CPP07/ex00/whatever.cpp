
# include <iostream>
# include <random>
using namespace std;

template <typename tipo> 
tipo max(tipo dato1, tipo dato2){
  return (dato1 > dato2 ? dato1 : dato2);
}

template <typename tipo> 
tipo min(tipo dato1, tipo dato2){
  return (dato1 < dato2 ? dato1 : dato2);
}

template <typename tipo> 
void swap(tipo &dato1, tipo& dato2){
 	tipo tmp = dato1;
	dato1 = dato2;
	dato2 = tmp;
}

int main(){
   /* int a = 1, b = 2, n; 
    float c = 1.0, d = 0.5, m; 
    
    n = ::max <int> (a,b); // Usando enteros
    m = ::max(c,d);        // Usando reales
    
    cout << "Entero max: " << n << endl;
    cout << "Real max: " << m << endl;

    n = ::min <int> (a,b); // Usando enteros
    m = ::min(c,d);        // Usando reales
    
    cout << "Entero min: " << n << endl;
    cout << "Real min: " << m << endl;
    
    ::swap <int> (a,b); // Usando enteros
    ::swap(c,d);        // Usando reales
    
    cout << "Entero swap: " << a << endl;
    cout << "Real swap: " << c << endl;*/
    cout << "---Main----: " << endl;
    int a = 2;
    int b = 2;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0; 
}