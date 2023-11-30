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
        std::cout << "El cuadrado de: " << num << " es " << cuadrado(num) << std::endl;;
    });


}