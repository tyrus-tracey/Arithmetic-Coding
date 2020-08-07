#pragma once
#include "symbolDistribution.h"

symbolDistribution::symbolDistribution(std::stringstream& stream)
    : A_freq(0), B_freq(0), sum(0)
{
    char c;
    while (stream >> c) {
        if (c == 'A') { A_freq++;} 
        else if (c == 'B') { B_freq++; }
    }
    sum = A_freq + B_freq;
}

int symbolDistribution::getFreqA() const
{
    return A_freq;
}

int symbolDistribution::getFreqB() const
{
    return B_freq;
}

int symbolDistribution::getSum() const
{
    return sum;
}
