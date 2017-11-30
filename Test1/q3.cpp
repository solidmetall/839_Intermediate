// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #1

#include <iostream>
#include <string>
using namespace std;
bool isValidRating(int);

int main()
{
	int num;
	cout<<"Enter rating: ";
	cin>>num;
	bool check = isValidRating(num);

	if (check==true)
		cout<<"Rating is valid\n";
	else
		cout<<"Rating is invalid\n";

	system ("pause");
	return 0;
}

bool isValidRating(int rating)
{
	if (rating>0 && rating<6)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
