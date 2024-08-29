#include "C:\Users\Admin\C++\old_headers\stuffs.h"

string* who(string* k){
    // cout<<*k;
     string* p = k+1;
     *p = "Gay";
    return (k+1);
}

int main(){
    string ut[10];
    ut[0]="Hello";
    ut[1]=" World";
    string* k = &ut[0];

    string* p = who(&ut[0]);

    cout<<p;
}

//array of strings and pointers
