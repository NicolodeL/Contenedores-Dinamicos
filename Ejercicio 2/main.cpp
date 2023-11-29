#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main () {
    list<double> decimales = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9};

    stack<double, std::list<double>> pila(decimales);


    cout << "Elemento superior de la pila: " << pila.top() << endl;

    pila.push(6.6);
    cout << "Nuevo elemento superior de la pila: " << pila.top() << endl;

    pila.pop();
    cout << "Elemento superior de la pila despues de pop: " << pila.top() << endl;

    return 0;
}