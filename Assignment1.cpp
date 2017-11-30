#include <iostream>
#include <string>
using namespace std;

 
void getHours (int&, string);
void getMinutes (int&, string);
void calcTotalTime (int&,int&,int&,int&);
bool isValidMinutes (int&);
bool isValidHours(int&);
const int MAX_MINS = 59;
const int MAX_HOURS = 23;
const int MIN_MINS = 0;
const int MIN_HOURS = 0;

int main ()

{	
    int hours, minutes, addedHours, addedMinutes;
    getHours(hours, "Enter the number of hours for the starting time: ");
    getMinutes(minutes, "Enter the number of minutes for the starting time: ");
    getHours (addedHours, "Enter the number of hours to be added to the starting time: ");
    getMinutes (addedMinutes,  "Enter the number of minutes to be added to the starting time: ");
    calcTotalTime (hours, minutes, addedHours, addedMinutes);
    cout << "\nThe total time is " << hours << " hours and "
            << minutes << " minutes." << endl;

	system ("pause");
    return 0;
}

 
void getHours(int& shrs, string mh)
{
	
	cout<<mh;
	cin >> shrs;


	 bool pass1 = isValidHours (shrs);

	while (pass1==false)
	{
		cout<<"Hours must be at least 0, and no more than 23!"<<endl;
		cout<<mh;
		cin>>shrs;
		pass1 = isValidHours (shrs);
	}
	
	
	
}

void getMinutes(int& smins, string mm)
{
	cout<<mm;
	cin>>smins;
	bool good = isValidMinutes(smins);

	while (good == false)
	{
	cout<<"Minutes must be at least 0, and no more than 59!"<<endl;
	cout<<mm;
	cin>>smins;
	good = isValidMinutes(smins);
	}
	
	

}

bool isValidHours (int& validation1)
{
	if (validation1>=0 && validation1 <=23)
		return true;
	else
		return false;

}

bool isValidMinutes (int& validation2)
{
	if (validation2>=0 && validation2 <=59)
		return true;
	else
		return false;
}

void calcTotalTime (int& thrs, int& tmins, int& addedhrs, int& addedmins)
{
	thrs=thrs+addedhrs;
	tmins=tmins+addedmins;

	if (tmins>59)
	{
		tmins=tmins-60;
		thrs=thrs+1;
	}
	
}