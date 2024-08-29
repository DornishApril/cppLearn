#include "stuffs.h"



string num_to_char(int);
string d2b(int);
string onecomp(string);
string badd1(string);
//the upper 4 function prototype needs to be "declared" 
//because d2b uses onecomp and badd1 
//and they are defined after d2b is
//defined
string num_to_char(int a){
    string s("");
    return s+(char)(a+48) ;
}


string d2b(int m){
    int mid =m;
    int isneg=0;
    if(mid<0)
        {
            isneg=1;
            mid = -mid;
        }
    string s("");
    while(mid){
        s = num_to_char(mid%2)+s;
        mid = mid/2;
    }
    if(s.length()<8){
        string p(8-s.length(),'0');
    
        s = p+s;
    }

    if(isneg){
        s = onecomp(s);
        s = badd1(s);

    }






    return s;
}
string badd1(string p){
    string s =p;
    for(int i=s.length()-1;i>-1;i--){
        if(s[i]=='1')
            s[i]='0';
        else{
            s[i]='1';
            break;
        }
    }
    return s;
}

string onecomp(string p){
    string s =p;
    for(int i=s.length()-1;i>-1;i--){
        if(s[i]=='1')
            s[i]='0';
        else{
            s[i]='1';
            
        }
    }
    return s;
}


string smult(string c,int n){
    string m("");
    for(int i=0;i<n;i++){
        m+=c;
    }
    return m;

}

int abs(int a){
    return ((a<0)?(-a):(a));
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
