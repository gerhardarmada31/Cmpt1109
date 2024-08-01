#include <iostream>
using namespace std;

//recursive approach
int Factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
		return n * Factorial(n - 1);
}

int Fibonaci(int x)
{
	if (x == 0)
	{
		return 0;
	}
	else if(x == 1)
	{
		return 1;
	}
	else
	{
		return Fibonaci(x - 1) + Fibonaci(x - 2);
	}
	

}

int main()
{
	int num;
	int fib;


	//iterative approach
	cout << "Enter an integer: ";
	cin >> num;

	/*
	for (int x = 1; x <= num; x++) // iterative approach
	{
		factor = factor * x;
	}
	*/

	//factor = Factorial(num);
	fib = Fibonaci(num);
	cout << num << " = " << fib << endl;
	//end iterative approach


	//fibonaci sequence


	return 0;

}

/*
5! = 5X4!
4! = 4X3!
3! = 3x2!
...
stop until its 0
1! = 1

n! = n x(n-1)!
*/