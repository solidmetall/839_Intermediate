// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #3

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include<cctype>
using namespace std;
bool isValidName(char[]);

int main()
{
	char name[80];
	bool result;
	cout<<"input name: ";
	cin.getline(name, 80);
	result = isValidName(name);

	if (result==true)
		cout<<"Name is Valid\n";
	else
		cout<<"Name is not valid\n";


	system ("pause");
	return 0;
}

bool isValidName(char nm[])
{
	int len=strlen(nm);
	if (len<1 || len>31)
		return false;

	bool check=isdigit(nm[0]);
	if (check==true)
		return false;

	for (int x=0; x<len; x++)
	{
		bool check1, check2;
		check1= isspace(nm[x]);
		check2=ispunct(nm[x]);

		if (check1==true)
			return false;
		if(nm[x]!='_')
		{

		if (check2==true)
			return false;
		}
	}

	return true;

}