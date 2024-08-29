#include <iostream>
#include <climits> // Definition of INT_MIN, ...
#include <cmath> 

using namespace std;


int dgaf(int);
int wgaf(double pop); /*pop is seen just as a comment*/

/*functions HAS TO BE DECLARED before using, like everything else.But if we use header files, we dont need to declare it, we should not. 
Its already declared in header files.*/

int main(){

/*Any expression can be passed to a function as an argument, such as a constant or an
arithmetical expression. However, it is important that the types of the arguments correspond to those expected by the function.
The compiler refers to the prototype to check that the function has been called correctly. If the argument type does not match exactly to the type defined in the prototype,
the compiler performs type conversion, if possible*/
int g = 5;
double y = pow( g, 3); 
cout<<y<<endl;
char bb = 'a';
y = pow(bb,2);/*type conversion possible*/
cout<<y;
/*If a function is called with the wrong number of arguments, or if type conversion
proves impossible, the compiler generates an error message.*/

//whatever();/*we are including a header file where the function whatever is defined/declared*/

/*manipulator*/
/*cout << showpos << 123; */
cout.setf( ios::showpos);
cout << 123;
cout<<endl<<-55<<endl<<endl<<endl;

cout.unsetf( ios::showpos);


double x = 12.0;
cout.precision(2); // Precision 2
cout << " By default: " << x << endl;
cout << " showpoint: " << showpoint << x << endl;
cout << " fixed: " << fixed << x << endl;
cout << " scientific: " << scientific << x << endl;
}