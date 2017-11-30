// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #3

#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;
void replace(char[],char,char);

int main()
{
	char buffer [80];
	char target, replacement;
	cout<<"Enter a string: ";
	cin.getline(buffer, 80);
	cout<<"Enter character to replace: ";
	cin >> target;
	cout<<"Enter replacement character: ";
	cin>>replacement;
	//call replace
	replace (buffer, replacement, target);
	cout<< buffer<<endl;
	system ("pause");
	return 0;
}


void replace (char line[],char repl, char targ)
{
	
	int len = strlen(line);
	for (int counter=0; counter<len; counter++)
	{
		if (line[counter]==targ)
		line[counter]=repl;
	}

}

