#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>
using namespace std;


int main() {
    auto cuadrado = [](int num) { return num * num; };
    cout << cuadrado(5) << endl;
    vector<int> numeros = {0, 1, 2, 3, 7};
    for_each(numeros.begin(), numeros.end(), [&](int num) {
        cout << "El cuadrado de: " << num << " es " << cuadrado(num) << endl;;
    });

    auto cubo = [](int num) { return num * num * num; };
    cout << cubo(5) << endl;
    for_each(numeros.begin(), numeros.end(), [&](int num) {
        cout << "El cubo de: " << num << " es " << cubo(num) << endl;;
    });


}