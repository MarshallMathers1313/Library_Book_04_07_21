#include "Header.h"

void menu()
{
	cout << "1 - ������ ���� ��������� ������\n";
	cout << "2 - ������ ����, ���������� �������� �������������\n";
	cout << "3 - ������ ����, ���������� ����� ��������� ����\n";
	cout << "0 - �����\n";
}

void searchAuthor(Book* books, int size)
{
	string author;
	cout << "������� ������: ";
	cin.ignore(32765, '\n');
	getline(cin, author);
	for (int i = 0; i < size; i++)
	{
		if (books[i].author == author)
		{
			books[i].info();
		}
	}
}

void searchIzdatelstvo(Book* books, int size)
{
	string published_house;
	cout << "������� ������������: ";
	cin.ignore(32765, '\n');
	getline(cin, published_house);
	for (int i = 0; i < size; i++)
	{
		if (books[i].published_house == published_house)
		{
			books[i].info();
		}
	}
}

void nextYear(Book* books, int size)
{
	int year;
	cout << "������� ���: ";
	cin >> year;
	for (int i = 0; i < size; i++)
	{
		if (books[i].year > year)
		{
			books[i].info();
		}
	}
}