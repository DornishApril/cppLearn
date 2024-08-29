#include "C:\Users\Admin\C++\old_headers\stuffs.h"
#include "C:\Users\Admin\C++\old_headers\func.h"

string heart(int ki){
    cout<<"hello duniya\n"<<endl;
    int x=1;
    int m=ki*2;
    string heart("");

    for(x=0;x<2;x+=2){
        //statements
        
        for(int k=m-2;k>=x;k-=2){
            //cout<<" ";
            heart+=" ";
        }
        for(int j=0;j<=x;j+=2){
            //cout<<"0 ";
            heart+="00";
        }
        for(int k=m-2;k>=x;k-=2)
        {
            //cout<<" ";
            heart+="00";
        }
        for(int k=m-2;k>=x;k-=2){
            //cout<<" ";
            heart+=" ";
        }
        for(int j=0;j<=x;j+=2){
            //cout<<"0 ";
            heart+="0 ";
        }
        //cout<<endl;
        heart+="\n";

    }
    for(x=3;x<m;x+=2){
        //statements
        
        for(int k=m-2;k>=x;k-=2){
            //cout<<" ";
            heart+=" ";
        }
        for(int j=0;j<=x;j+=2){
            //cout<<"0 ";
            heart+="0 ";
        }
        for(int k=m-2;k>=x;k-=2)
        {
            //cout<<" ";
            heart+=" ";
        }
        for(int k=m-2;k>=x;k-=2){
            //cout<<" ";
            heart+=" ";
        }
        for(int j=0;j<=x;j+=2){
            //cout<<"0 ";
            heart+="0 ";
        }
        //cout<<endl;
        heart+="\n";

    }
    
    for(x=0;x<m*2;x+=2){
        //cout<<"0 ";
        heart+="0 ";
    }
    //cout<<endl;
    heart+="\n";
     for(x=m*2-1;x>0;x-=2){
        //statements
        for(int k=m*2-1;k>=x;k-=2){
            //cout<<" ";
            heart+=" ";
        }
        for(int j=0;j<x;j+=2){
            //cout<<"0 ";
            heart+="0 ";
        }
        heart+="\n";
        //cout<<endl;
        if(x<3)
            break;
     }

     
     return heart;


}

int main(){
    int m=5;
    char ji;
    
    string heartin = heart(m);
    cout<<heartin;

    cin.get(ji);
}

