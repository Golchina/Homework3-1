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
	printf("Введите количество писем\n");
	cin >> n;
	printf("Введите текущий тариф\n");
	cin >> price;
	Mailbox* myMailbox = new Mailbox();
	for (int i = 0; i < n; i++)
	{
		printf("Введите адреса отправителя и получателя, а также вес письма и его ценность\n");
		cin >> sender >> recipient;
		scanf_s("%d",&weight);
		cin >> value;
		myMailbox->addMail(sender, recipient, weight, value, price);
	}
	myMailbox->printMail();
	/*printf("Введите адреса отправителя и получателя, а также вес письма\n");
	cin >> sender >> recipient >> weight;
	OrderedLetter* ordered = new OrderedLetter(sender, recipient, weight);
	ordered->outputInfo();
	printf("Введите текущий тариф\n");
	cin >> price;
	printf("Стоимость отправки письма равна ");
	cout << ordered->cost(price);
	printf("\n");
	printf("Введите ценность\n");
	cin >> value;
	ValuableLetter* valuable = new ValuableLetter(sender, recipient, weight, value);
	valuable->outputInfo();
	printf("Введите текущий тариф\n");
	cin >> price; 
	printf("\n");
	printf("Стоимость отправки письма равна ");
	cout << valuable->cost(price, value);
	printf("\n");*/
	system("pause"); 
}