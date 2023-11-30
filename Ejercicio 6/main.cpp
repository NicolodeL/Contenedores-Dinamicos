#include <iostream>
#include "lexical_cast.hpp"
using namespace std;

int main() {
string codigo = "58192";
try{
int descodificado = boost::lexical_cast<int>(codigo);
cout << "Número: " << descodificado << endl;
}
    }
