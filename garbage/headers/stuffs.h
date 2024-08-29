#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<cmath>
#include<ctype.h>
#include<cctype>
#include <cstdlib>
#include <time.h> 
#include <climits>
#include <iomanip>// for setw, toupper,setfill
#include <conio.h>//for getch(),getline(),kbhit()

#define CLS (cout << "\033[2J")
#define LOCATE(z,s) (cout <<"\033["<< z <<';'<< s <<'H')
#define ss " ------ "
#define ll "\n\n\n"


using namespace std;

string smult(string c,int n){
    string m("");
    for(int i=0;i<n;i++){
        m+=c;
    }
    return m;

}

string heart(int ki,string c1,string c2){
    //cout<<"hello duniya\n"<<endl;
    int x=1;
    int m=ki;
    string heart("");
    string s("");
    s = c1+" "+c2+" ";

    cout<<ss<<s<<ss<<endl<<endl;
    for(x=1;x<3;x++){

        heart +=smult("  ",m-2-x+1);
        heart+=smult(s,x+1);
        heart +=smult("  ",(m-2-x+1)*2);
        heart +=smult(s,x+1);
        heart+="\n";

    }
    for(x=3;x<m;x++){

        heart +=smult("  ",m-2-x+1);
        heart+=smult(s,x+1);
        heart +=smult("  ",(m-2-x+1)*2);
        heart+=smult(s,x+1);
        heart+="\n";

    }
    int h = ki-11;
    if(h<0) h=3;
    else
        h=h+3;

    for(int j=0;j<h;j++){
        heart+=smult(s,m*2);
        heart+="\n";
    }
    for(x=m*2-1;x>0;x--){

        heart+=smult("  ",m*2-1-x+1);
        heart+=smult(s,x);
        heart+="\n";

        
    }

     

    heart+=smult(" ",m*4-1);
    heart+=c1;
     
     return heart;


}


// isalpha(c) c is a letter
// islower(c) c is a small letter
// isupper(c) c is a capital letter 
// isdigit(c) c is a decimal digit
// isalnum(c) c is a letter or a digit
// isspace(c) c is a space letter
// isprint(c) c is a printable letter

string tempt(int ki,string c1,string c2,string* k,int*ln){
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
        
     }
     temp+="\n";

     *ln = count;
     return temp;


}
