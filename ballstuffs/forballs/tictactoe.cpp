#include "stuffs.h"
#include "classes.h"




#define ESC 27 // ESC terminates the program
unsigned long delay = 500000000;

void hor(int l,int x,int y){
    for(int j=0;j<l;j++){
        LOCATE(y+j,x);cout<<"|";
    }
}
void vert(int l,int x,int y){
    for(int j=0;j<l;j++){
        LOCATE(y,x+j);cout<<"----";
    }
}
void grid(){
        int horr=30;
    int vertt=10;

    hor(25,horr,5);
    hor(25,horr+20,5);

    vert(60,10,vertt);
    vert(60,10,vertt+10);
}




int main(){

    CLS;
    //int cs[] = {1,1,1,1,1,1,1,1,1};
    int cs[] = {0,0,0,0,0,0,0,0,0};

    cross x_;
    trin t_;
    vi V(cs);


    int x=10,y=10;
    int dist =10;
    int x1,y1,x2,y2,x3,y3,x4,y4,x5,y5,x6,y6;

    int term=0;

    int cx=0,cy=0;
    int pressed =0;
    int t=0;
    int win =0;
    while(!term){
        if(win==0){
        V.upd(cs);
        
        grid();
        V.shows();
        
        }
        int timmy=0;
        int cde=0;
        for(int i=0;i<9;i++){
            if(cs[i]==0)
                cde++;
        }
        if((cs[0]==cs[1]&&cs[1]==cs[2])||\
            (cs[0]==cs[3]&&cs[3]==cs[6])||\
            (cs[0]==cs[4]&&cs[4]==cs[8])||\
            (cs[1]==cs[4]&&cs[1]==cs[7])||\
            (cs[2]==cs[5]&&cs[2]==cs[8])||\
            (cs[2]==cs[4]&&cs[6]==cs[2])||\
            (cs[3]==cs[4]&&cs[4]==cs[5])||\
            (cs[6]==cs[7]&&cs[7]==cs[8])\
          

        ){
            if(cde<5){
                cout<<"\a";
            win=1;
            }
            
        }
        

        if(win==1){
            CLS;
            LOCATE(20,20); cout<<"WHOEVER DID THT LAST THING YOU WONNNNNNNN!!!!\n\n";
            cout<<"Do you want to continue?? (Enter) Yes ||| (Esc) No";

            switch(getch()){
                case ESC:
                    term =0;
                    break;
                case '\n':
                    win=0;
                    break;
            }
        }

        



        while(!timmy){
            if(!kbhit()==1){
                if(t==0)
                        t=1;
                    else 
                        t=0;
                    timmy=1;
                switch(getch()){
                    
                    case 'q':
                        cs[0]=t+1;
                        
                        break;
                    case 'w':
                        cs[1]=t+1;
                        //timmy=1;
                        break;
                    case 'e':
                        cs[2]=t+1;
                        //timmy=1;
                        break;
                    case 'a':
                        cs[3]=t+1;
                        //timmy=1;
                        break;
                    case 's':
                        cs[4]=t+1;
                        //timmy=1;
                        break;
                    case 'd':
                        cs[5]=t+1;
                        //timmy=1;
                        break;
                    case 'z':
                        cs[6]=t+1;
                        //timmy=1;
                        break;
                    case 'x':
                        cs[7]=t+1;
                        //timmy=1;
                        break;
                    case 'c':
                        cs[8]=t+1;
                        //timmy=1;
                        break;

                    case ESC:
                        term =1;
                        break;
                    
                    

                }
            }
        }
        
        
    }

}