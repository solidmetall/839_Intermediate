 
#include <iostream>
#include <fstream>
using namespace std;
#include <string>
void writeFile(ofstream&, string);
void readFile(ifstream&, string);

int main()
{
string filename;
ofstream outputFile;
ifstream inputFile;
cout << "Enter name of output file: ";
getline(cin, filename);
writeFile(outputFile, filename);
cout << "Enter name of input file: ";
getline(cin, filename);
readFile(inputFile, filename);
system ("pause");
return 0;
}

void writeFile(ofstream& output, string s)
{
output.open(s);
string name;
int counter = 1;
do
{
cout << "Enter name of student or ENTER to stop: ";
getline(cin, name);
if (name.length() != 0)
{
output << "Student " << counter << ": " << name << endl;
counter++;
}
} while (name.length() != 0);
output.close();
}

void readFile(ifstream& input, string s)
{
string name;
input.open(s);
if (input.fail())
cout << "Error opening file.\n";
else
{
while (getline(input, name))
{ cout << name << endl; }
input.close();
}
}


