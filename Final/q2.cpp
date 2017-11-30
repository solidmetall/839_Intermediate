// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012

#include <iostream>	//Standard Library that implement stream-based input/output capabilities
#include <string>	//For Strings
#include <fstream>	//To work with files
#include <cstdlib>	//For convertion between string representation (number (“123”) and the number (123))
#include <cstring>	//For cstring
#include <cctype>	//For character testing
#include <iomanip>	//Input/Output manipulations, to sort and put output in order

using namespace std;

struct Info{
int pos;
int neg;
Info()
{
	pos = 0;
	neg = 0;
}
};

void inputArray (int*, int);
void PosNeg(Info*, int*, int);

int main()
{
	int size, *usersarray;
	Info result;


	cout<<"Enter number of elements of array: ";
	cin>>size;

	usersarray = new int[size];

	inputArray (usersarray, size);
	PosNeg (&result, usersarray, size);

	cout<<"Array has "<<result.pos<<" positive numbers and "<<result.neg<<" negative numbers"<<endl;

	delete [] usersarray;
	system ("pause");
	return 0;
}

void inputArray (int a[], int s)
{
	for (int counter=0; counter<s; counter++)
	{
		cout<<"Enter value: ";
		cin>>a[counter];
	}
}

void PosNeg (Info *res, int a[], int s)
{
	for (int counter=0; counter<s; counter++)
	{
		if (a[counter]<0)
			res->neg++;
		if (a[counter]>0)
			res->pos++;
	}
}