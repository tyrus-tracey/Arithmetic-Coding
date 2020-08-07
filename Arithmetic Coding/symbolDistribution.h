#pragma once
#include <sstream>
#include <string>

// A record of symbol and their frequencies
class symbolDistribution
{
public:
    symbolDistribution(std::stringstream& stream);
    int getFreqA() const;
    int getFreqB() const;
    int getSum() const; 
    std::string getString() const;
    
private:
    std::string input;
    int A_freq;
    int B_freq;
    int sum;
};
