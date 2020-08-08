#include "arithmeticCoding.h"

arithmeticCoding::arithmeticCoding(symbolDistribution& distribution)
	: A_prob(0), B_prob(0), low(0), high(1), range(1), input(distribution.getString())
{
	if (distribution.getSum() > 0) {
		A_prob = double(distribution.getFreqA()) / distribution.getSum();
		B_prob = double(distribution.getFreqB()) / distribution.getSum();
	}
	generate();
}

void arithmeticCoding::generate()
{
	std::string::iterator iter;
	while (!input.empty()) {
		iter = input.begin();
		checkScale(); //E1 or E2?

		//get new low/high/range from *iter's prob
		inputChar(*iter);

		input.erase(iter);
	}
}

//TODO: Confirm calculations
void arithmeticCoding::inputChar(char c)
{
	if (c == 'A') {
		high = (range * A_prob) + low;
		range = high - low;
	}
	else {
		low += (range * A_prob);
		range = high - low;
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

void arithmeticCoding::checkScale()
{
	while (needE1() || needE2()) {
		E1Scale();
		E2Scale();
	}
}

bool arithmeticCoding::needE1()
{
	return (low <= 0.5 && high <= 0.5) ? true : false;
}

bool arithmeticCoding::needE2()
{
	return (low > 0.5 && high > 0.5) ? true : false;
}

//TODO: Confirm calculations
void arithmeticCoding::E1Scale()
{
	if (low <= 0.5 && high <= 0.5) {
		low *= 2;
		high *= 2;
		range = high - low;
		output.push_back('0');
	}
}

void arithmeticCoding::E2Scale()
{
	if (low > 0.5 && high > 0.5) {
		low = 2 * (low - 0.5);
		high = 2 * (high - 0.5);
		range = high - low;
		output.push_back('1');
	}
}


void arithmeticCoding::print() const
{
	std::cout << "Low   : " << low << std::endl;
	std::cout << "High  : " << high << std::endl;
	std::cout << "Range : " << range << std::endl;
	std::cout << "Output: " << output << std::endl;
}