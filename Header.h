#pragma once
#include <iostream>
#include <string>
using namespace std;
class Book
{
	char* author;
	char* name;
	char* published_house;
	int year;
	int page;

public:
	//Конструктор с параметрами
	Book(const char* author, const char* name,
		const char* published_house, int year, int page)
	{
		cout << "Book Constructor: " << this << endl;
		this->author = new char[strlen(author) + 1];
		strcpy_s(this->author, strlen(author) + 1, author);

		this->name = new char[strlen(name) + 1];
		strcpy_s(this->name, strlen(name) + 1, name);

		this->published_house = new char[strlen(published_house) + 1];
		strcpy_s(this->published_house, strlen(published_house) + 1, published_house);

		this->year = year;

		this->page = page;
	}

	//Конструктор по умольчанию
	Book() :Book{ nullptr, nullptr, nullptr, 0, 0 }
	{
	}

	//Деструктор
	~Book()
	{
		cout << "Book Destructor: " << this << endl;
		delete[] author;
		delete[] name;
		delete[] published_house;
	}

	//Вывод инф.
	void info()const
	{
		cout << "Author: " << author << endl;
		cout << "Name: " << name << endl;
		cout << "Published House: " << published_house << endl;
		cout << "Year: " << year << endl;
		cout << "Page: " << page << endl;
	}

	friend void searchAuthor(Book* books, int size);
	friend void searchIzdatelstvo(Book* books, int size);
	friend void nextYear(Book* books, int size);
};

void menu();

void searchAuthor(Book* books, int size);

void searchIzdatelstvo(Book* books, int size);

void nextYear(Book* books, int size);