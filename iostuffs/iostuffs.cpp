#include <iostream>
#include <climits> // Definition of INT_MIN, ...
#include <cmath> 

using namespace std;



/*functions HAS TO BE DECLARED before using, like everything else.But if we use header files, we dont need to declare it, we should not. 
Its already declared in header files.*/

int main(){

cout << 1.0<<endl; // Output: 1
cout << 1.234<<endl; // Output: 1.234
cout << 1.234567<<endl; // Output: 1.23457

double x = 12.0;
cout.precision(2); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;


bool ok = true;
cout << ok << endl // 1
<< boolalpha << ok << endl; // true

}