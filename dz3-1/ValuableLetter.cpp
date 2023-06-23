#include "ValuableLetter.h"
#include <iostream>
#include <stdio.h>

using namespace std;

int ValuableLetter::valueMetod(int value)
{
	return (0.4*value);
}

ValuableLetter::ValuableLetter(){}

ValuableLetter::ValuableLetter(string senderAddress, string recipientAddress, int weight, int value)
{
	addValuableLetter(senderAddress, recipientAddress, weight, value);
}

float ValuableLetter::cost(float  price, int value)
{
	return (price*weight / 100 + valueMetod(value));
}

void ValuableLetter::outputInfo()
{
	printf("Адрес получателя: ");
	cout << senderAddress;
	printf("\nАдрес отправителя: ");
	cout << recipientAddress;
	printf("\nВес письма: ");
	cout << weight;
	printf("\nЦенность письма: ");
	cout << value;
	printf("\n");
}

void ValuableLetter::addValuableLetter(string senderAddress, string recipientAddress, int weight, int value)
{
	this->senderAddress = senderAddress;
	this->recipientAddress = recipientAddress;
	this->weight = weight;
	this->value = value;
}

