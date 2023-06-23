#pragma once
#include "OrderedLetter.h"
class ValuableLetter : public OrderedLetter
{
private:
	int value;
	int valueMetod(int value);
public:
	ValuableLetter();
	ValuableLetter(string senderAddress, string recipientAddress, int weight, int value);
	float cost(float price, int value);
	void outputInfo();
	void addValuableLetter(string senderAddress, string recipientAddress, int weight, int value); 
};

