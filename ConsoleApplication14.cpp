#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	Book books[3]{ Book{"Pushkin", "Stixi", "Russia", 2020, 240},
		{"Esenen", "Stix", "Tyumen", 2018, 100},
		{"Brain Trayci", "Comfort","USA", 2015, 280}
	};
	int key;
	
	do
	{
		menu();
		cin >> key;
		switch (key)
		{
		case 1: 
			searchAuthor(books, 3);
			break;
		case 2:
			searchIzdatelstvo(books, 3);
			break;
		case 3:
			nextYear(books, 3);
			break;
		}
	} while (key != 0);

	return 0;
}