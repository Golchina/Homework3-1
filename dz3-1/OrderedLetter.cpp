#include "OrderedLetter.h"
#include <iostream>
#include <stdio.h>

using namespace std;

OrderedLetter::OrderedLetter(){}

OrderedLetter::OrderedLetter(string senderAddress, string recipientAddress, int weight)
{
	addOrderedLetter(senderAddress, recipientAddress, weight);
}

void OrderedLetter::addOrderedLetter(string senderAddress, string recipientAddress, int weight)
{
	this->senderAddress = senderAddress;
	this->recipientAddress = recipientAddress;
	this->weight = weight;
}

void OrderedLetter::outputInfo()
{
	printf("Адрес получателя: ");
	cout << senderAddress;
	printf("\nАдрес отправителя: ");
	cout << recipientAddress;
	printf("\nВес письма: ");
	cout << weight;
	printf("\n");
}

float OrderedLetter::cost(float price)
{
	return price*weight/100;
}
