// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #2

#include <iostream>
#include <string>
#include <fstream>
using namespace std;
bool compareArrays (int[],int, int[]);


int main()
{
	int firstArray[3], secondArray[3], thirdArray[4], fourthArray[4];

	cout<<"Entering values for first array \n";
	for(int counter=0; counter<3; counter++)
	{
		cout<<"Enter number: ";
		cin>>firstArray[counter];
	}

	cout<<"Entering values for second array \n";
	for(int counter=0; counter<3; counter++)
	{
		cout<<"Enter number: ";
		cin>>secondArray[counter];
	}
	cout<<"Entering values for third array \n";
	for(int counter=0; counter<4; counter++)
	{
		cout<<"Enter number: ";
		cin>>thirdArray[counter];
	}
	cout<<"Entering values for fourth array \n";
	for(int counter=0; counter<4; counter++)
	{
		cout<<"Enter number: ";
		cin>>fourthArray[counter];
	}

	cout<<"Comparing first and second arrays \n";

	bool check= compareArrays(firstArray, 3, secondArray);
	if (check==true)
		cout<<"They are equal!"<<endl;
	if(check==false)
		cout<<"They are not equal!"<<endl;

	cout<<"Comparing third and fourth arrays \n";

	bool check2=compareArrays(thirdArray, 4, fourthArray);
	if (check2==true)
		cout<<"They are equal!"<<endl;
	if(check2==false)
		cout<<"They are not equal!"<<endl;

	system ("pause");
	return 0;
}

bool compareArrays (int first[], int size, int second[])
{ 
	int check=0;
	for (int counter=0; counter<size; counter++)
	{
		if (first[counter]==second[counter])
			check++;
	}

	if (check==size)
		return true;
	else
		return false;
}

