#include <iostream>
#include <sstream>
#include "arithmeticCoding.h"
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
            arithmeticCoding code(distribution);
            /*
            std::cout << code.getString() << std::endl;
            std::cout << "P(A): " << code.getProbA() << std::endl;
            std::cout << "P(B): " << code.getProbB() << std::endl;
            std::cout << "- - - - - -\n";
            */
        }
        else {
            running = false;
        }
    }
    std::cout << "Closing...\n";
}
