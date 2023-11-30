#include <iostream>
#include <vector>
#include <memory>
using namespace std;


int main() {
    auto cuadrado = [](int num) { return num * num; };
    cout << cuadrado(5) << endl;

}