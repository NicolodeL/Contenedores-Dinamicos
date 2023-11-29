#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
vector<int> numeros = {5,9,3,4,1,6,20};
std::sort(numeros.begin(), numeros.end());
    std::cout << "Elementos del vector despues de ordenar: ";
    for (int num : numeros) {
        std::cout << num << " ";
    }



}
