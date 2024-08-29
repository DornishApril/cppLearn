#include<iostream>
#include<stdio.h>
#include<vector>
#include<string>
#include<string.h>
#include<cmath>
#include<ctype.h>
#include<cctype>
#include <cstdlib>
#include <time.h> 
#include <climits>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(int argc,char* argv[]){
        
    string num=(argv[1]);
    string number = num;
    
    int c=1;
    int f=0;
    
 for(int i=(number.length()-1);i>-1;i--){
    int x=number[i];
    
    if(isalpha(number[i]))
        {
            x = x-97+10;
        }
    else x = x-48;
    int y =x;
    
    //cout<<y<<endl;
    if(i==(number.length()-1)){
        c=1;
    }
    else c=c*2;
    int d=f+y*c;
    f=d;
    
   
    
    }
    cout<<f;
    return 0;
    }
// int x=number[0];
// cout<<x;



   