#pragma once
#include <string>

using namespace std;

class OrderedLetter
{
protected:
	string senderAddress;
	string recipientAddress;
	int weight;
public:
	OrderedLetter();
	OrderedLetter(string senderAddress, string recipientAddress, int weight);
	void addOrderedLetter(string senderAddress,	string recipientAddress, int weight);
	void outputInfo();
	float cost(float price);
};

