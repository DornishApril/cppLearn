// A program with resistant mistakes
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
char ch;
string word;
cout<< "Let's go! Press the return key: " ;
cin.get(ch);
cout << "Enter a word containing three characters at most: ";
cin >> word;
cout <<setw(3)<<"Your input: " <<word << endl;
return 0;
}