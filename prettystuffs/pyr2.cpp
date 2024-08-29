#include "C:\Users\Admin\C++\old_headers\stuffs.h"
#include "C:\Users\Admin\C++\old_headers\func.h"

string temptt(int ki,string c1,string c2,string* k, int* l){
    //cout<<"hello duniya\n"<<endl;
    int x=1;
    int m=ki;
    string s("");
    s= c1+" "+c2+" ";
    string temp("");
    
    string*kk =k;
    string s1('-',14);
    int count =0;
    int t=0;
    for(x=0;x<2;x++){
        //statements
        string temp("");
        temp =temp+smult(" ",t);
        count++;
        for(int k=m-2;k>=x;k--){
            //cout<<"  ";
            temp+="  ";
        }
        for(int j=0;j<=x;j++){
            //cout<<"0 ";
            temp+=s;
        }
        for(int k=m-2;k>=x;k--)
        {
            //cout<<"  ";
            temp+="  ";
        }
        for(int k=m-2;k>=x;k--){
            //cout<<"  ";
            temp+="  ";
        }
        for(int j=0;j<=x;j++){
            //cout<<"0 ";
            temp+=s;
        }
        //cout<<endl;
        
        temp+="\n";
        
        *kk = temp;
        kk++;
        count++;

    }
    
    for(x=3;x<m;x++){
        //statements
        string temp("");
        temp=temp+smult(" ",t);
        count++;
                for(int k=m-2;k>=x;k--){
            //cout<<"  ";
            temp+="  ";
        }
        
        for(int j=0;j<=x;j++){
            //cout<<"0 ";
            temp+=s;
        }
        for(int k=m-2;k>=x;k--)
        {
            //cout<<"  ";
            temp+="  ";
        }
        for(int k=m-2;k>=x;k--){
            //cout<<"  ";
            temp+="  ";
        }
        for(int j=0;j<=x;j++){
            //cout<<"0 ";
            temp+=s;
        }
        //cout<<endl;
        
        temp+="\n";
        *kk = temp;
        kk++;
        count++;
    }
    
    for(int j=0;j<3;j++){
        string temp("");
        temp=temp+smult(" ",t);
        count++;        
        for(x=0;x<m*2;x++){
        //cout<<"0 ";
        temp+=s;
        
    }
    //cout<<endl;
    
    temp+="\n";
    *kk = temp;
        kk++;
    count++;
    }
    
    //cout<<endl;
     for(x=m*2-1;x>0;x--){
        //statements
        string temp("");
        temp=temp+smult(" ",t);
        count++;        
        for(int k=m*2-1;k>=x;k--){
            //cout<<"  ";
            temp+="  ";
        }
        for(int j=0;j<x;j++){
            //cout<<"0 ";
            temp+=s;
        }
        
        temp+="\n";
        //cout<<endl;
        *kk = temp;
        kk++;
        count++;
        
     }
     temp+="\n";

     count++;
     *l = count;
     return temp;


}

int main(){

    int l = 0;
    string ut[100];
    temptt(8,"x","o",&ut[0],&l);

    for(int i=0;i<=l;i++){
        cout<<ut[i];
    }

}