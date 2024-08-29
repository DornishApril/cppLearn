#include "C:\Users\Admin\C++\old_headers\stuffs.h"
#include "C:\Users\Admin\C++\old_headers\func.h"

int main(){
    int a;
    string s("fuck");
    char ch[20]="You_123456";
    
    cout<<"string pointer's output &s= "<<&s<<endl\
    <<"output of a single string member pointer output &s[0]: "<<&s[0]\
    <<endl<<"&ch[0]: "<<&ch[0]<<endl<<\
    "&ch[1]: "<<&ch[1]<<endl<<\
    "ch[0]: "<<ch[0]<<endl;


    cout<<"Following is a string with whitespace characters\n\n";

    string c("");
    char enter = 13;
    char esc = 27;
    string j(3,27);
    c=c+"tinder is \n\t\tgay"+"~ ~ ~ ~"+j+"---------"+"----"+j;
    cout<<endl<<endl<<endl;

    for(int i=0;i<c.length();i++){
        cout<<"this is "<<i<<"th character in the string: ";
        cout<<c[i]<<ss<<(int)c[i]<<endl;
    }
    cout<<c<<endl<<endl<<endl;











    
}



// 0 1 2
// 3 4 5
// 6 7 8 (s=0,diff=1,inc=3)

// 0 3 6
// 1 4 7
// 2 5 8 (s=0,diff=3,inc=1)

// 0 4 8 (s=0,diff=4,inc = 2)
// 2 6 10


// 0 1 2
// 0 1 2
// 0 1 2

