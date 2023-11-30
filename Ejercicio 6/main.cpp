#include <iostream>

using namespace std;

int main() {
string codigo = "58192";
int descodificado = boost::lexical_cast<int>(codigo);
cout << "Número: " << descodificado << endl;


}