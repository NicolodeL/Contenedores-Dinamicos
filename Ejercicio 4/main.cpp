#include <iostream>
#include <valarray>
using namespace std;

int main() {
    valarray<double> numeros = {1.0, 2.0, 3.0, 4.0, 5.0};
    valarray<double> numeros2 = {2.0, 4.0, 6.0, 8.0, 9.0};
    valarray<double> resultado = numeros - numeros2;

    cout << "Suma: " << numeros.sum() << endl;

    for (auto &v : resultado) {
        cout << v << " ";
    }
    cout << "\nMedia: " << numeros.sum() / numeros.size() << endl;
    cout << "Media: " << numeros2.sum() / numeros2.size() << endl;
    cout << "Resta de totales " << numeros.sum() - numeros2.sum() << endl;
    cout << "Multiplicacion de totales: " << numeros.sum() * numeros2.sum() << endl;




}