#include "arithmeticCoding.h"

arithmeticCoding::arithmeticCoding(symbolDistribution& distribution)
	: A_prob(0), B_prob(0), input(distribution.getString())
{
	A_prob = double(distribution.getFreqA()) / distribution.getSum();
	B_prob = double(distribution.getFreqB()) / distribution.getSum();

	if (distribution.getSum() == 0) {
		A_prob = 0;
		B_prob = 0;
	}
}

double arithmeticCoding::getProbA() const
{
	return A_prob;
}

double arithmeticCoding::getProbB() const
{
	return B_prob;
}

std::string arithmeticCoding::getString() const
{
	return input;
}
