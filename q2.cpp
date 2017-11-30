// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #1

#include <iostream>
#include <string>
using namespace std;
int inputRating(int&);

int main()
{
	int value;
	int num = inputRating(value);

	cout<<"Rating is: "<<num<<endl;


	system ("pause");
	return 0;
}

int inputRating(int& rating)
{

	cout<<"Enter rating: ";
	cin>>rating;
	return rating;
}
