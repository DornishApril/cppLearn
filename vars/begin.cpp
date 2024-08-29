#include <iostream>
#include <climits> // Definition of INT_MIN, ...
using namespace std;
int idc;
int main()
{

    int udc;

unsigned int a = 1234;
unsigned int b = 4234;



cout<<a-b<<endl; /*will cause overflow*/

cout<<hex<<(int)'j'<<endl;


cout << "-"" +"<<endl;

/*Any global variables not explicitly initialized default to zero. In contrast, the initial
value for any local variables that you fail to initialize will have an undefined initial value.*/

cout<<"global idc = "<<idc<<"-----  local udc= "<<dec<<udc<<endl;

/*The const keyword is used to create a “read only” object. As an object of this type is
constant, it cannot be modified(by program or external events) at a later stage and must be initialized during its definition.*/

const double pi = 3.1415947;

/*The keyword volatile, which is rarely used, creates variables that can be modified not
only by the program but also by other programs and external events. Events can be initiated by interrupts or by a hardware clock, for example.

*/
volatile unsigned long clock_ticks; 

/*
Even if the program itself does not modify the variable, the compiler must assume that
the value of the variable has changed since it was last accessed. The compiler therefore
creates machine code to read the value of the variable whenever it is accessed instead of
repeatedly using a value that has been read at a prior stage.
It is also possible to combine the keywords const and volatile when declaring a*/

volatile const unsigned time_to_live=10;
/*
Based on this declaration, the variable time_to_live cannot be modified by the program but by external events.
*/

float aa = 123.456;
float bb(76.543);

cout<<aa-bb<<endl;

return 0;
}

