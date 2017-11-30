// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #2

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void inputArray (int[], int);
void outputArray (int[], int);

int main()
{
	int num;
	cout<<"How many array elements: ";
	cin>>num;
	int *input;
	input = new int[num];

	inputArray (input, num);

	outputArray (input, num);
	delete [] input;
	system ("pause");
	return 0;
}

void inputArray (int in[], int n)
{
	for(int counter=0; counter<n; counter++)
	{
		cout<<"Input Value: ";
		cin>>in[counter];
	}
}

void outputArray (int in[], int n)
{
	for(int counter=0; counter<n; counter++)
		cout<<in[counter]<<" ";
}