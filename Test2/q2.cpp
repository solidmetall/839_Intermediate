// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #2

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int higher(int[], int, int);


int main()
{
	int search, high;
	

	int firstArray[3];
	
	for(int counter=0; counter<3; counter++)
	{
		cout<<"Input values of first array: ";
		cin>>firstArray[counter];
	}

	int secondArray[4];
	for(int counter=0; counter<4; counter++)
	{
		cout<<"Input values of second array: ";
		cin>>secondArray[counter];
	}

	cout<<"Input search value: ";
	cin>>search;

	 high = higher(firstArray, 3, search);
	 

	cout<<"First array has "<<high<<" numbers higher than "<<search<<endl;

	high = higher(secondArray, 4, search);

	cout<<"Second array has "<<high<<" numbers higher than "<<search<<endl;

	return 0;

	system ("pause");
	
}

int higher(int fa[], int size, int s)
{
	int a=0;
	for(int counter=0; counter<size; counter++)
	{
		if (fa[counter]>s)
		{
			a++;
			
		}
	}
	return a;
}