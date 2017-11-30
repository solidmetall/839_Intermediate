#include <iostream>
using namespace std;
// any other library files you need
#include <cctype>
// prototype isValidSSN
bool isValidSSN(char[]);


int main ()
{
char ssn[80];
bool result;
cout << "SSN: ";
cin >> ssn;
/* call isValidSSN */
result = isValidSSN(ssn);
if (result == true)
   cout << ssn << " is valid\n";
else
   cout << ssn << " is not valid\n";
return 0;
}

// implement isValidSSN
bool isValidSSN(char s[])
{
	int len = strlen(s);
	if (len != 11)
		return false;
	for (int x = 0; x < 11; x++)
	{
		// to be written
		if (x == 3 || x == 6)
		{
			if (s[x] != '-')
				return false;
		}
		else
		{
			if (isdigit(s[x]) == 0)
				return false;
		}
	}
	return true;
}

