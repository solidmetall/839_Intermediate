// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #1

#include <iostream>

using namespace std;

int betterTeacher();

int main()
{
	int answer;
	int check = betterTeacher();
	
	if (check==1)
		cout<<"Teacher 1 is better\n";
	if (check==-1)
		cout<<"Teacher 2 is better\n";
		if(check==0)
			cout<<"Teacher ratings are the same\n";
	
	system ("pause");
	return 0;
}

int betterTeacher()
{
	int rating1, rating2;
	cout<<"Rating for Teacher 1: ";
	cin>>rating1;
	cout<<"Rating for Teacher 2: ";
	cin>>rating2;

	if(rating1>rating2)
		return 1;
	if (rating1<rating2)
		return -1;
	if (rating1==rating2)
		return 0;

}