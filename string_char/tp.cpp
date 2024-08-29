#include "stuffs.h"

int main(){

    int m,n,o;
    m=144;
    n=14;
    o=6;
    cout<<"    Jodu    Modhu    Kodu\n";
    cout<<setw(8)<<m<<setw(9)<<n<<setw(8)<<o<<endl;

    int h=7;
    int k=2;
    for(int i=1;i<=h;i++){
        cout<<setw(h+k-i);
        for(int j=0;j<i;j++){
            cout<<"0 ";
        }
        cout<<endl;
    }
}