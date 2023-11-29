#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
vector<int> numeros = {5,9,3,4,1,6,20};
sort(numeros.begin(), numeros.end());
cout << "Elementos del vector despues de ordenar: ";
for (int num : numeros) {
        cout << num << " ";
    }
int maxNum = *std::max_element(numeros.begin(), numeros.end());
cout << "\nEl numero mas grande es: " << maxNum << endl;
}
