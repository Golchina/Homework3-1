#pragma once
#include <iostream>
#include <vector>
#include <iterator> 
#include "ValuableLetter.h"
 class Mailbox
{
private:
	int currentMail = 0;
	float sumCost = 0;
	ValuableLetter mas[100];

public:
	void addMail(string senderAddress, string recipientAddress, int weight, int value, float price);
	Mailbox();
	void printMail();
};

