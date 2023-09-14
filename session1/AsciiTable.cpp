#include <iostream>
int main() {
    // Print ASCII table header
    std::cout << "ASCII Table code : \n";

    // Print ASCII codes and corresponding characters
    for (int i = 0; i <= 127;i++) {
        std::cout << i << "\t|\t " << static_cast<char>(i) << "\n";
    }

    return 0;
}