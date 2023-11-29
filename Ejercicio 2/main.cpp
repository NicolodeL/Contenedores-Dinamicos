#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main () {
    list<double> decimales = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.10};
    stack<double, std::list<double>> pila(decimales);
    cout << "Elemento superior de la pila: " << pila.top() << std::endl;
    pila.push(6.6);
    std::cout << "Nuevo elemento superior de la pila: " << pila.top() << std::endl;
    pila.pop();
    std::cout << "Elemento superior de la pila después de pop: " << pila.top() << std::endl;

    return 0;
}