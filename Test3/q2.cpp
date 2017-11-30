// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #3

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include<cctype>
using namespace std;
int numLowerCase (char[]);

int main()
{
	char buffer[80];
	cout<<"Enter string: ";
	cin>>buffer;

	int check= numLowerCase(buffer);

	if (check== -1)
		cout<<buffer<<" "<<"has an invalid character!"<<endl;
	else
		cout<<buffer<<" "<<"has "<<check<<" lower case letters"<<endl;
	
	system ("pause");
	return 0;
}

int numLowerCase(char buff[])
{
	int len = strlen(buff);
	int rs =0;
	for (int x=0; x<len; x++)
	{
		bool signcheck;
		bool lowercheck;
		signcheck = ispunct(buff[x]);
		
		if (signcheck == true)
			return -1;
		else
		
		lowercheck = islower(buff[x]);
		
		if (lowercheck == true)
			rs++;
	}

	
	
	return rs;

}