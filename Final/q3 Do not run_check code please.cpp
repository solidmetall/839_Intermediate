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

enum genderdef { male, female };

union bookdef {char trade; char text;};
union tradebook {int advance; float royalty;};
///union trade {float advance;};
//union text {float royalty;};

struct Author{
	string name;
	genderdef gender;
};

struct Book{
	string bookname;
	tradebook clas;
	bookdef book;

};

void assignValues (Book*, Author*);
void displayValues (Book*, Author*);
int main()
{	
	Book b;
	Author a;
	assignValues (&b, &a);
	displayValues (&b, &a);

	system ("pause");
	return 0;
}
void assignValues (Book *a, Author *b)
{
	int num;
	Author *numofa;
	cout<<"Enter number of Authors: ";
	cin>>num;
	numofa = new Author[num];
	//for (int counter=0; counter<num; counter++)
	//{
		char B;
		cout<<"Enter books title: ";
		cin>>a->bookname;
		cout<<"Enter trade (T/t) or text (X/x) book: ";
		cin>>B;

		if (B=='T'||B=='t')
		{
			cin>>a->book.trade;
			cout<<"Enter advance: ";
			cin>>a->clas.advance;
		}
		else
		{
			cin>>a->book.text;
			cout<<"Enter royalty per book sold: ";
			cin>>a->clas.royalty;
		}
		

	
	//}

		for (int counter=0; counter<num; counter++)
		{
			cout<<"Author "<<counter<<endl;
			cout<<"Enter name: ";
			getline(cin, numofa[counter].name);
			cout<<"Enter gender: ";
			//cin >> numofa[counter].gender;         tried to CIN>> a value, but it doesnt work, dont know why
		}
}
