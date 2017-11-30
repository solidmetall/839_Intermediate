#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void input (int[],int);
void output (int [], int);
void writeFile(ofstream&, int[], int);



int main()
{
	int MyArray [5];
	ofstream godzilla;
	writeFile(godzilla, MyArray, 5);

	//input (MyArray, 5);
	output (MyArray, 5);
	


	system ("pause");
	return 0;
}


void input (int val[], int size)
{
for (int counter=0; counter<5; counter++)
	{
		cout<<"Please enter value: ";
		cin>>val[counter];
	}
}

void output(int val[], int size)
{
 
	for (int x=0; x<5; x++)
	{
		cout<<val[x]<<endl;
	}

}

void writeFile(ofstream& godzilla,int val[],int size)
{
	godzilla.open("shit.txt");

	for (int counter=0; counter<5; counter++)
	{
		cout<<"Please enter value: ";
		cin>>val[counter];
		godzilla<<val[counter]<<endl;
	}

	godzilla.close();
}