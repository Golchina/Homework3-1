#include "Mailbox.h"

void Mailbox::addMail(string senderAddress, string recipientAddress, int weight, int value, float price)
{
	mas[currentMail].addValuableLetter(senderAddress, recipientAddress, weight, value);
	sumCost = sumCost + mas[currentMail].cost(price, value);
	currentMail++;
}

Mailbox::Mailbox(){}

void Mailbox::printMail()
{
	for (int i = 0; i < currentMail; i++)
	{
		printf("������ �%d\n", i+1);
		mas[i].outputInfo();
	}
	printf("����� ��������� �����:");
	cout << sumCost;
}

