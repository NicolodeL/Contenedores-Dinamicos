#include <iostream>
#include <list>
#include <stack>
using namespace std;

int main () {
    list<double> decimales = {1.1,1.2,1.3,1.4,1.5,1.6,1.7,1.8,1.9,1.10};
    stack<double, std::list<double>> pila(decimales);

    return 0;
}