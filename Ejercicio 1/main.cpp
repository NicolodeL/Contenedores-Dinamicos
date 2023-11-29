
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> coches {1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < coches.size(); i++) {
        cout << coches[i] << endl;
    }

    for(std::vector<int>::iterator it = coches.begin(); it != coches.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}