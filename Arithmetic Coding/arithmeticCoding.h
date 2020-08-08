#pragma once
#include <string>
#include <iostream>
#include "symbolDistribution.h"

class arithmeticCoding
{
public:
	arithmeticCoding(symbolDistribution& distribution);

	void generate();
	void inputChar(char c);
	
	double getProbA() const;
	double getProbB() const;
	void print() const;

private:
	void checkScale();
	bool needE1();
	bool needE2();
	void E1Scale();
	void E2Scale();
	std::string input;
	std::string output;
	double low;
	double high;
	double range;

	double A_prob;
	double B_prob;
};

