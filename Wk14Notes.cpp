#include <iostream>
using namespace std;

//Struct a collection of different data types
struct Car
{
	string make;
	string model;
	int year;
	double price;
};

int main()
{
	//declaration
	Car x;
	//alternate initialization
	Car y = { "Nissan", "Maxima",2020,33000 };
	//Initialization of value
	x.make = "Honda";
	x.model = "Civic";
	x.year = 2024;
	x.price = 32000;

	cout << x.make << " " << x.model << " " << x.year << " $" << x.price << endl;
	cout << y.model;


	//array of cars
	Car arr[3];

	//intialization of cars
	arr[0].make = "Honda";
	arr[0].model = "Civic";
	arr[0].year = 2024;
	arr[0].price = 32000;

	arr[1].make = "Something1";
	arr[1].model = "Test 1";
	arr[1].year = 2000;
	arr[1].price = 22000;

	arr[2].make = "Something 2";
	arr[2].model = "Test 2";
	arr[2].year = 2020;
	arr[2].price = 1100;

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i].make << endl;
	}

	return 0;
}