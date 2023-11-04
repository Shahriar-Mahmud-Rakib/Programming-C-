#include <iostream>

int main() {
    int i = 1;
    do {
        std::cout << "Iteration " << i << std::endl;
        ++i;
    } while (i <= 5);
    return 0;
}
