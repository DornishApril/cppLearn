#include <iostream>
using namespace std;
int main()
{
int i(2), j(8);
cout << i++ << endl; // Output: 2
cout << i << endl; // Output: 3
cout << j-- << endl; // Output: 8

cout << --j << endl; // Output: 6

int x =4,y=5;

x = (y=5, y+1);
cout<<x<<endl;

x = (cout<<"hello  ", y+1);
cout<<x<<endl;

x = (y+6, y+2);
cout<<x<<endl;

x = (y++, y+1);
cout<<x<<endl;

return 0;
}