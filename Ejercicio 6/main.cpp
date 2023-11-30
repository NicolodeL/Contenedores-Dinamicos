#include <iostream>
#include "lexical_cast.h"
using namespace std;

int main() {
string codigo = "58192";
try{
int descodificado = boost::lexical_cast<int>(codigo);
cout << "Número: " << descodificado << endl;
}
catch(boost::bad_lexical_cast &e) {
    cerr << "Error: " << e.what() << endl;
}
    }
