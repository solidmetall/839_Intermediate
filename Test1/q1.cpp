// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #1

#include <iostream>
#include <string>
using namespace std;
void inputRating(int&);

int main()
{
	int num;
	inputRating(num);

	cout<<"Rating is: "<<num<<endl;


	system ("pause");
	return 0;
}

void inputRating(int& rating)
{

	cout<<"Enter rating: ";
	cin>>rating;
}
