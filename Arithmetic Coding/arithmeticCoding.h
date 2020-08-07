#pragma once
#include <string>
#include "symbolDistribution.h"

class arithmeticCoding
{
public:
	arithmeticCoding(symbolDistribution& distribution);
	double getProbA() const;
	double getProbB() const;
	std::string getString() const;

private:
	std::string input;
	double A_prob;
	double B_prob;
};

