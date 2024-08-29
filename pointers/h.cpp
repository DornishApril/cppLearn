#include "C:\Users\Admin\C++\old_headers\stuffs.h"

int main(){
    int a;
    string s("fuck");
    char ch[20]="You_123456";
    
    cout<<endl<<endl<<"string pointer's output &s= "<<&s<<endl\
    <<"output of a single string member pointer output &s[0]: "<<&s[0]<<endl\
    
    <<"*s gives error so try *&s: "<<*&s<<endl\
    <<"*&s[0] : "<<*(&s[0])<<endl\
    <<"*&s[1] : "<<*(&s[1])<<endl\
    <<"*&s[1] : "<<*(&s[2])<<endl<<endl\
    <<"s[0] : "<<(s[0])<<endl\
    <<endl<<"&ch[0]: "<<&ch[0]<<endl<<\
    "&ch[1]: "<<&ch[1]<<endl<<\
    "ch[0]: "<<ch[0]<<endl;





}