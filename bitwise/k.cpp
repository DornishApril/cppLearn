
#include "C:\Users\Admin\C++\old_headers\stuffs.h"
#include "C:\Users\Admin\C++\old_headers\func.h"
// 23 

// 11 1
// 5  1
// 2  1
// 1  0
// 0  1
int main(){

    int a = 26;
    int b = 11;

    cout<<ll<<"XOR"<<endl<<endl;
    cout<<d2b(a)<<endl;
    cout<<d2b(b)<<endl;
    //cout<<ss<<ss<<ss<<ss<<endl;
    cout<<"--------------"<<endl;
    cout<<d2b(a^11)<<ll;

    cout<<"AND"<<endl<<endl;
    cout<<d2b(a)<<endl;
    cout<<d2b(b)<<endl;
    //cout<<ss<<ss<<ss<<ss<<endl;
    cout<<"--------------"<<endl;
    cout<<d2b(a&b)<<ll;



    cout<<"OR"<<endl<<endl;
    cout<<d2b(a)<<endl;
    cout<<d2b(b)<<endl;
    //cout<<ss<<ss<<ss<<ss<<endl;
    cout<<"--------------"<<endl;
    cout<<d2b(a|b)<<ll;



    cout<<"One's Complement"<<endl<<endl;

    cout<<d2b(a)<<endl;
    cout<<"||||||||"<<endl;
    cout<<d2b(~a)<<ll;

    cout<<"Bit-shifter - Left << Shift"<<ll;
    cout<<"Original:           "<<d2b(a)<<setw(5)<<a<<endl<<"shifted by 1:       "<<\
    d2b(a<<1)<<setw(5)<<(a<<1)<<endl<<\
        "shifted by 1 again: "<<d2b((a<<1)<<1)<<setw(5)<<((a<<1)<<1)<<endl<<endl<<\
        "does the same as:\nshifting by 2:      "<<d2b(a<<2)<<setw(5)<<(a<<2)<<endl<<\
        "\n\ninitial variable a is NOT changed, a= "<<a<<ll;


    cout<<"Bit-shifter - Right >> Shift"<<ll;
    cout<<"Original:           "<<d2b(a)<<setw(5)<<a<<endl<<"shifted by 1:       "<<\
    d2b(a>>1)<<setw(5)<<(a>>1)<<endl<<\
        "shifted by 1 again: "<<d2b((a>>1)>>1)<<setw(5)<<((a>>1)>>1)<<endl<<endl<<\
        "does the same as:\nshifting by 2:      "<<d2b(a>>2)<<setw(5)<<(a>>2)<<endl<<\
        "\n\ninitial variable a is NOT changed, a= "<<a<<ll;


    // cout<<"Adding one to binary bit:  "<<badd1("100b111");

    // for(int i=-10;i<11;i++)
    // cout<<(i)<<ss<<~(i)<<endl;

    // cout<<onecomp("00010001")<<ll;

    // cout<<d2b(23)<<endl<<d2b(-23)<<endl;

    unsigned char  x = 7; 
    cout<<setw(4)<<(int)x<<ss<<"<< shifted by 0"<<ss<<setw(4)<<d2b(x)<<endl; 
    x = x<<1;
    cout<<setw(4)<<(int)x<<ss<<"<< shifted by 1"<<ss<<setw(4)<<d2b(x)<<endl; 
    x = x<<3;

    cout<<setw(4)<<(int)x<<ss<<"<< shifted by 3"<<ss<<setw(4)<<d2b(x)<<endl; 
    x = x<<2;
    cout<<setw(4)<<(int)x<<ss<<"<< shifted by 2"<<ss<<setw(4)<<d2b(x)<<endl; 
    x = x>>1;
    cout<<setw(4)<<(int)x<<ss<<">> shifted by 1"<<ss<<setw(4)<<d2b(x)<<endl; 
    x = x>>2;
    cout<<setw(4)<<(int)x<<ss<<">> shifted by 2"<<ss<<setw(4)<<d2b(x)<<endl; 





}