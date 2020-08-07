#pragma once
#include "symbolDistribution.h"

class arithmeticCoding
{
public:
	arithmeticCoding(symbolDistribution& distribution);
	double getProbA() const;
	double getProbB() const;

private:
	double A_prob;
	double B_prob;
};

