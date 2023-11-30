#include <iostream>
#include <valarray>
using namespace std;

int main() {
    valarray<double> numeros = {1.0, 2.0, 3.0, 4.0, 5.0};
    valarray<double> numeros2 = {2.0, 4.0, 6.0, 8.0, 10.0};
    valarray<double> resultado = numeros - numeros2;

    cout << "Suma: " << numeros.sum() << endl;

    for (auto &v : resultado) {
        cout << v << " ";
    }
    cout << endl;


}