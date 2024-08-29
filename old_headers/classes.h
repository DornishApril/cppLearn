#include "func.h"



class cheart{
public:
    int m;
    string lines[30];
    cheart(int a,string s1,string s2){
        tempt(a,s1,s2,&lines[0],&m);
    }
    ~cheart(){

    }

    void print_heart(){
        for(int i=0;i<m;i++){
            cout<<lines[i];
        }
        cout<<m;
    }
    void locate(int y,int x){
        for(int i=0;i<m;i++){
            LOCATE(y+i,x+i);cout<<lines[i];
        }
    }

};


class rocket{
    public:
    string a,b,c,d,e,f;
    rocket(){
    a="  / \\\n"  ;
    b="  | |\n"  ;
     c="  |0|\n"  ;
     d="  | |\n"  ;
     e=" /...\\\n"  ;
     f="/|||||\\\n"  ;
    }
    void show_rocket(){
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
    }
    void locate(int y, int x){
        LOCATE(y,x);cout<<a;
        LOCATE(y+1,x);cout<<b;
        LOCATE(y+2,x);cout<<c;
        LOCATE(y+3,x);cout<<d;
        LOCATE(y+4,x);cout<<e;
        LOCATE(y+5,x);cout<<f;
        

    }
};

