#include <iostream>
#include <string>
using namespace std;

struct Books
{
	string title;
	string author;
	int edition;
	int numPages;
	double price;
};

int main()
{
	Books bArray[3];

	for (int x = 0; x < 3; x++)
	{
		cout << "Data for Book " << x + 1 << endl << endl;

		cout << "Book Title:" << endl;
		getline(cin, bArray[x].title);
		

		cout << "Author: " << endl;
		getline(cin, bArray[x].author);
		

		cout << "Edition:" << endl;
		cin >> bArray[x].edition;
		

		cout << "Number of pages: " << endl;
		cin >> bArray[x].numPages;

		cout << "Price: " << endl;
		cin >> bArray[x].price;
		cin.ignore();
	}

	for (int y = 0; y < 3; y++)
	{
		cout << "Title: " << bArray[y].title << endl;
		cout << "Author: " << bArray[y].author << endl;
		cout << "Edition: " << bArray[y].edition << endl;
		cout << "Number of Pages: " << bArray[y].numPages << endl;
		cout << "Price: " << bArray[y].price << endl;
	}
}