#include <iostream>
#include <stdio.h>
#include <string>
#include "OrderedLetter.h"
#include "ValuableLetter.h"
#include "Mailbox.h"

using namespace std;

int main()
{
	system("chcp 1251");
	string sender, recipient;
	int weight, value=1, n;
	float price;
	printf("������� ���������� �����\n");
	cin >> n;
	printf("������� ������� �����\n");
	cin >> price;
	Mailbox* myMailbox = new Mailbox();
	for (int i = 0; i < n; i++)
	{
		printf("������� ������ ����������� � ����������, � ����� ��� ������ � ��� ��������\n");
		cin >> sender >> recipient;
		scanf_s("%d",&weight);
		cin >> value;
		myMailbox->addMail(sender, recipient, weight, value, price);
	}
	myMailbox->printMail();
	/*printf("������� ������ ����������� � ����������, � ����� ��� ������\n");
	cin >> sender >> recipient >> weight;
	OrderedLetter* ordered = new OrderedLetter(sender, recipient, weight);
	ordered->outputInfo();
	printf("������� ������� �����\n");
	cin >> price;
	printf("��������� �������� ������ ����� ");
	cout << ordered->cost(price);
	printf("\n");
	printf("������� ��������\n");
	cin >> value;
	ValuableLetter* valuable = new ValuableLetter(sender, recipient, weight, value);
	valuable->outputInfo();
	printf("������� ������� �����\n");
	cin >> price; 
	printf("\n");
	printf("��������� �������� ������ ����� ");
	cout << valuable->cost(price, value);
	printf("\n");*/
	system("pause"); 
}