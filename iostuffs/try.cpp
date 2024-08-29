#include "C:\Users\Admin\C++\old_headers\stuffs.h"

int main(){
int c;
int t=0;
while(!t){

if( kbhit() != 0) // Key was pressed?
{
c = getch(); // Yes -> Get character
cout<<c<<endl;
}
if(c==27)
    t=1;
}
return 1;
}