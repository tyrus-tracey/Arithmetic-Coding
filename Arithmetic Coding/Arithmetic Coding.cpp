#include <iostream>
#include <sstream>
#include "symbolDistribution.h"
std::string inputString;
bool running = true;

int main()
{
    std::cout << "Arithmetic Coding Program.\n";
    while (running) {
        std::cout << "Enter a string of A's and B's. X to Close:\n";
        std::cin >> inputString;
        if (inputString != "X" && inputString != "x") {
            std::stringstream inputStream(inputString);
            symbolDistribution distribution(inputStream);
        }
        else {
            running = false;
        }
    }
    std::cout << "Closing...\n";
}
