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

bool validate (char[]);

int main()
{
	char strPW[80];
	bool result;

	cout<<"Enter a password: ";
	cin>>strPW;

	result = validate(strPW);

	if (result==true)
	
	cout<<"The password "<<strPW<<" is valid"<<endl;

	if (result==false)
	cout<<"The password "<<strPW<<" is not valid"<<endl;


	system ("pause");
	return 0;
}
bool validate (char pass[])
{	int lowcasecheck=0, uppercasecheck=0, digitcheck=0;
	int len=strlen(pass);
	if (len<7 || len>9)
		return false;
	for (int counter=0; pass[counter]; counter++)
	{
		int letdig=ispunct(pass[counter]);
		if (letdig>0)
			return false;
		int upcase = isupper(pass[counter]);
		if (upcase>0)
			uppercasecheck++;
		int lowcase= islower(pass[counter]);
		if(lowcase>0)
			lowcasecheck++;
		int dig= isdigit(pass[counter]);
		if (dig>0)
			digitcheck++;
	}

	if (uppercasecheck<1)
		return false;
	else if (lowcasecheck<2)
		return false;
	else if (digitcheck<3)
		return false;
	else
		return true;
}