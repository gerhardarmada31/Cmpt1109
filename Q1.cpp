#include <iostream>
using namespace std;

int main()
{

	//using pointers is storing the address rather the value of a variable
	// x=5, x address is like 763042
	//int* p; is pointer integer
	//*p = &x getting the address of x not the value
	//*p = new x;

/*
	int x = 5;
	double y = 6.79;
	int* p;
	double* q;
	p = &x;
	q = &y;
	*p = 67;// it's basically turned into x=67

	cout << x << endl;
	cout << *p << endl;
*/

//name of an array is a pointer

	int size;
	cout << "How many elements?";
	cin >> size;


	//dynamic array can have the size of your own choice.

	double* x;

	//old declaration
	//double x[size] = { 5,6,8,9 };

	//millions of lines of code


	x = new double[size];

	//process the array

	/*
	cout << (long long int) x << endl;
	cout << (long long int) & x[0] << endl;
	cout << (long long int) & x[1] << endl;
	cout << (long long int) & x[2] << endl;
	cout << (long long int) & x[3] << endl;
	cout << *x << endl;
	cout << *(x + 1);
	*/

	//deletes the memory of x
	// delete does not destroy. It frees the memory.

	delete[] x;

	return 0;
}

void DMA()
{

	int size;
	double* x;

	cin >> size;


	//DMA for a singel var
	x = new double;
	*x = 67.92;
	delete x;

	//DMA for an array
	x = new double[size];
	//process the array
	delete[] x;

	//DMA for another array
	x = new double[size];
	//process the array
	delete[] x;


	

}