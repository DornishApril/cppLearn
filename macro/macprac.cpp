#include "C:\Users\Admin\C++\old_headers\stuffs.h"

#define z 0

#ifndef toupper
#undef z
#define z 1

#define toupper(a) \
       ((char) (islower(a)?((a)-'a'+'A'):(a)))

#endif

int p =0;
//re-initialization is not possible
//p=4;

int main(){
    cout<<"Hello Cucks!UwU\n\n";

    int m=20;
    m-=2;
    cout<<z<<endl;
    
    cout<<toupper('B');
    return 0;
}
