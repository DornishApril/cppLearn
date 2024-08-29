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

    int term=0;

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
        

        if(win==1){
            
            for(int j=0;j<delay;j++);            
            CLS;
            LOCATE(20,20); cout<<"WHOEVER DID THT LAST THING YOU WONNNNNNNN!!!!\n\n";
            LOCATE(35,1); cout<<"Do you want to continue??\n\n(Enter) Yes ||| (Esc) No";
            for(int i=0;i<9;i++)
                    cs[i]=0;
            }

            switch(getch()){
                case ESC:
                    term =1;
                    break;
                case 13:
                    win=0;
                    timmy=1;
                    CLS;
                    break;
            }
        }

        



        while(!timmy){
            
        }
        
        
    }

}