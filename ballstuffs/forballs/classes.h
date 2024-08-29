



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
            LOCATE(y+i,x);cout<<lines[i];
        }
    }

};

class rocket{
    public:
    string a,b,c,d,e,f;
    rocket(){
    a="  / \\\n"  ;//9
    b="  | |\n"  ;//8
     c="  |0|\n"  ;//10
     d="  | |\n"  ;//10
     e=" /...\\\n"  ;//12
     f="/|||||\\\n"  ;//13
    }
    void show_rocket(){
        cout<<a<<endl<<b<<endl<<c<<endl<<d<<endl<<e<<endl<<f<<endl;
    }
    
    void dislocate(int y, int x){
        string p1("          \n");
        string p2("         \n");
        string p3("             \n");
        string p4("             \n");
        string p5("             \n");
        string p6("             \n");

        LOCATE(y,x);cout<<p1;
        LOCATE(y+1,x);cout<<p2;
        LOCATE(y+2,x);cout<<p3;
        LOCATE(y+3,x);cout<<p4;
        LOCATE(y+4,x);cout<<p5;
        LOCATE(y+5,x);cout<<p6;


        

    }
    void locate(int y, int x){

        dislocate(y,x);
        
        LOCATE(y,x);cout<<a;
        LOCATE(y+1,x);cout<<b;
        LOCATE(y+2,x);cout<<c;
        LOCATE(y+3,x);cout<<d;
        LOCATE(y+4,x);cout<<e;
        LOCATE(y+5,x);cout<<f;

        LOCATE(100,100);
        

    }
};
          
class rocket_90{
    public:
    string l,m,n;
    rocket_90(){
        l= "________/---\n";
        m="<___0_____:------\n";
        n="         \\------\n";
    }

    void locate(int y, int x){
        LOCATE(y,x);cout<<l;
        LOCATE(y+1,x);cout<<m;
        LOCATE(y+2,x);cout<<n;
    }
    void dislocate(int y, int x){
        string p(15,' ');
        LOCATE(y,x);cout<<p;
        LOCATE(y+1,x);cout<<p;
        LOCATE(y+2,x);cout<<p;
        

    }
};

class cross{
public:
//string a,b,c,d,e,f,g,h,i,j,k,l;


string d="   \\     /";
string e="    \\   /";
string f="     \\ /";
string g="      /\\";
string h="     /  \\";
string i="    /    \\";


    cross(){

    }
    ~cross(){

    }

    void locate(int y, int x){

        LOCATE(y,x);cout<<d;
        LOCATE(y+1,x);cout<<e;
        LOCATE(y+2,x);cout<<f;
        LOCATE(y+3,x);cout<<g;
        LOCATE(y+4,x);cout<<h;
        LOCATE(y+5,x);cout<<i;


        

    }
    void dislocate(int y, int x){

        LOCATE(y,x);cout<<" ";
        LOCATE(y+1,x);cout<<" ";
        LOCATE(y+2,x);cout<<" ";
        LOCATE(y+3,x);cout<<"";
        LOCATE(y+4,x);cout<<" ";
        LOCATE(y+5,x);cout<<" ";


        

    }


};

class roundd{

public:

string a="       00000";
string b="     000000000";
string c="   0000000000000";
string d="   0000000000000";
string e="     000000000";
string f="       00000";



roundd(){}
~roundd(){}
void locate(int y, int x){

        LOCATE(y,x);cout<<a;
        LOCATE(y+1,x);cout<<b;
        LOCATE(y+2,x);cout<<c;
        LOCATE(y+3,x);cout<<d;
        LOCATE(y+4,x);cout<<e;
        LOCATE(y+5,x);cout<<f;
        
        

        

    }
    void dislocate(int y, int x){

        LOCATE(y,x);cout<<smult(" ",12);
        LOCATE(y+1,x);cout<<smult(" ",14);
        LOCATE(y+2,x);cout<<smult(" ",16);
        LOCATE(y+3,x);cout<<smult(" ",16);
        LOCATE(y+4,x);cout<<smult(" ",14);
        LOCATE(y+5,x);cout<<smult(" ",12);


        

    }


};

class trin{
public:
    int m;
    string lines[30];
    trin(){
       m=  trin_con(lines,6);
    }

    
    void locate(int y,int x){
        for(int i=0;i<=m;i++){
            LOCATE(y+i,x);cout<<lines[i];
        }
    }
    void dislocate(int y,int x){
        for(int i=0;i<=m;i++){
            LOCATE(y+i,x);cout<<"           ";  
        }
    }

};

class stt{
public:
int x,y,c;
stt(int a, int b,int d){
    y=a;
    x=b;
    c=d;
}
stt(){
    y=1;
    x=1;
    c=0;
}
};

class vi{
public:
        //(1,12)  (0,0)
        //(10,10) (0,1)
        //(20,12)  (0,2)

        //(0,34)    (1,0)
        //(10,34)   (1,1)
        //(20,34)   (1,2)
        
        //(10,54)    (2,1)
        //(0,54)    (2,0)
        //(20,54)   (2,2)
stt g[9];
cross x;

roundd t;
// int yy=1;
// int xx=10;
// int xd = 10;

int arry[9] ={1,1,1,12,12,12,22,22,22};
int arrx[9] ={10,33,60,10,33,60,10,33,60};

vi(int* i){
    int* temp =i;
    for(int i=0;i<9;i++){
        g[i].y=arry[i];
        g[i].x=arrx[i];
        g[i].c=*temp;
        temp++;
    }

}

~vi(){

}
void tp(){
    for(int i=0;i<9;i++){
        cout<<g[i].x<<ss<<g[i].c<<endl;

    }

}

void upd(int* i){
    int* temp =i;
    for(int i=0;i<9;i++){
        g[i].c=*temp;
        temp++;
    }

}

void shows(){
    for(int i=0;i<9;i++){
        
        switch(g[i].c){
            case 0:
                cout<<" ";
                break;
            case 1:
                x.dislocate(g[i].y,g[i].x);
                t.dislocate(g[i].y,g[i].x);
                x.locate(g[i].y,g[i].x);
                break;
            case 2:
                t.dislocate(g[i].y,g[i].x);
                x.dislocate(g[i].y,g[i].x);
                t.locate(g[i].y,g[i].x);
                break;

        }

    }
}

void dissy(){
    for(int i=0;i<9;i++){
        
        switch(g[i].c){
            case 0:
                cout<<" ";
                break;
            case 1:
                x.dislocate(g[i].y,g[i].x);
                t.dislocate(g[i].y,g[i].x);
                
                break;
            case 2:
                t.dislocate(g[i].y,g[i].x);
                x.dislocate(g[i].y,g[i].x);
                
                break;

        }

    }
}




};

class asteroid{
public:
int sel;
int y,x,dy,dx;
int p=0;
string a="     *";
string b="    *  *";
string c="   *    *";
string d="    * * *";


string a1="      * *";
string a2="    *     *";
string a3="     - * '";

    asteroid(int m,int yy,int xx){
        sel = m;
        y=yy;
        x=xx;
        dy=1;
        dy=1;

    }
    asteroid(){
        sel = 1;
        x=10;
        y=2;

    }
    
    void dislocate(){

        string p1("     \n");
        string p2("     \n");
        string p3("        \n");
        string p4("      \n");
        

        LOCATE(y,x);cout<<p1;
        LOCATE(y+1,x);cout<<p2;
        LOCATE(y+2,x);cout<<p3;
        LOCATE(y+3,x);cout<<p4;
        
        


    }
    void locate(){

        string a_,b_,c_,d_;
        if(sel==1){
            a_=a1;
            b_=a2;
            c_=a3;
            d_=" ";
        }
        else{
            a_=a;
            b_=b;
            c_=c;
            d_=d;

        }
            
        
        LOCATE(y,x);cout<<a_;
        LOCATE(y+1,x);cout<<b_;
        LOCATE(y+2,x);cout<<c_;
        LOCATE(y+3,x);cout<<d_;
        
        
        

        

    }
    void upyx(){
        
        
        if(x>=70||x<4){
            dx=-dx;
            x=(x>=40)?(x-6):(x+5);

        }
        if(y>=30||y<4){
            dy=-dy;
            y=(y>=30)?(y-6):(y+5);
            
        }
        y= y+dx;
        x=x+dx;
    }
    



};






