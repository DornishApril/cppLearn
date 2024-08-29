
#include "C:\Users\Admin\C++\ballstuffs\forballs\stuffs.h"
#include "C:\Users\Admin\C++\ballstuffs\forballs\classes.h"

#define ESC 27
#define ENTR 13


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

        for(int i=1;i<5;i++){
            int hj=0;
            for(int j=0;j<9;j++){
                int p=abs((j%3)-((j+i)%3))-abs(((j+i)%3)-((j+i+i)%3));
                //cout<<"-----  "<<a0<<"  "<<a1<<endl;
                
                if(((j+i+i)<=8)&&(!p)){
                    int a0 = cs[j], a1 = cs[i+j], a2 = cs[i+j+i];
                if((a0&&a1)&&(a0&&a2))
                    if((a0==a1)&&(a0==a2)){
                        win=1;
                            for(int i=0;i<9;i++)
                                 cs[i]=0;
                            hj=1;
                            break;

                    }

                    
                    
                }
            }
            if(hj==1){break;}
    
        }

  
        
        

        if(win==1){
            
            for(int j=0;j<delay;j++);            
            CLS;
            LOCATE(20,20); cout<<"WHOEVER DID THT LAST THING YOU WONNNNNNNN!!!!\n\n";
            LOCATE(35,1); cout<<"Do you want to continue??\n\n(Enter) Yes ||| (Esc) No";


            switch(getch()){
                case ESC:
                    term =1;
                    break;
                case ENTR:
                    win=0;
                    timmy=1;
                    CLS;
                    break;
            }
        }

        


        int ind =0;
        while(!timmy){
            
            if(!kbhit()==1){
                if(t==0)
                        t=1;
                    else 
                        t=0;
                    timmy=1;
                
                switch(getch()){
                    
                    case 'q':
                        ind =0;
                        break;
                    case 'w':
                        ind =1;
                        break;
                    case 'e':
                        ind =2;
                        
                        break;
                    case 'a':
                        ind =3;
                        
                        break;
                    case 's':
                        ind =4;
                        
                        break;
                    case 'd':
                        ind =5;
                        
                        break;
                    case 'z':
                        ind =6;
                        
                        break;
                    case 'x':
                        ind =7;
                        
                        break;
                    case 'c':
                        ind =8;
                        
                        break;
                    case ESC:
                        term =1;
                        break;
                    
                    
                }
                cs[ind]=t+1;

            }
            }
        
        
    }

}