// Petin Evgeniy	CSIT-839
//Section#:			3375
//Fall 2012 Midterm #1

#include <iostream>
using namespace std;
void processGrade (int, char&);

int main()
{
	int num;
	char grade;

	cout<<"Enter Rating: ";
	cin>>num;
	processGrade(num,grade);
	cout<<"Your grade is: "<<grade<<endl;


	
	system ("pause");
	return 0;
}


void processGrade(int number, char& grading)
{
	if (number==5)
		grading='A';
	else if (number==4)
		grading ='B';
	else if (number==3)
		grading ='C';
	else if (number==2)
		grading ='D';
	else if (number==1)
		grading ='F';
}