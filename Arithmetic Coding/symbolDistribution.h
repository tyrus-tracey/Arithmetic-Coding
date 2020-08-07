#pragma once
#include <sstream>

// A record of symbol and their frequencies
class symbolDistribution
{
public:
    symbolDistribution(std::stringstream& stream);
    int getFreqA() const;
    int getFreqB() const;
    int getSum() const; 
    
private:
    int A_freq;
    int B_freq;
    int sum;
};
