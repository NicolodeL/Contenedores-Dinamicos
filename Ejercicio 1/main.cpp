
#include <iostream>
#include <vector>

using namespace std;

int main() {

    std::vector<int> coches;
    
    for (int i = 0; i < 10; ++i) {
        coches.push_back(i);
    }

    for(std::vector<int>::iterator it = coches.begin(); it != coches.end(); ++it) {
        std::cout << *it << std::endl;
    }

    return 0;
}