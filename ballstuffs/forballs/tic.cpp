
#include "stuffs.h"
#include "func.h"
#include "classes.h"


#define ESC 27
#define ENTR 13


unsigned long delay = 300000000;

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

    hor(30,horr,1);
    hor(30,horr+20,1);

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
    int winner[]={0,0,0};
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

            for(int j=0;j<9;j++){
                int p=abs((j%3)-((j+i)%3))-abs(((j+i)%3)-((j+i+i)%3));
                //cout<<"-----  "<<a0<<"  "<<a1<<endl;
                if(((j+i+i)<=8)&&(!p)){
                    int a0 = cs[j], a1 = cs[i+j], a2 = cs[i+j+i];
                if((a0&&a1)&&(a0&&a2))
                    if((a0==a1)&&(a0==a2)){
                        winner[0]=j,winner[1]=j+i,winner[2]=j+i+i;
                        win=1;
                            for(int i=0;i<9;i++)
                            {
                                cs[i]=0;
                            }
                            cs[j]=t+1; 
                            cs[j+i]=t+1; 
                            cs[j+i+i]=t+1;   
                            i=10;
                            break;

                    }

                    
                    
                }
            }
    
        }

  
        
        

        if(win==1){
            V.upd(cs);
            for(int i=0;i<delay;i++);
            for(int i=0;i<3;i++){
                V.dissy();
                for(int i=0;i<delay;i++);
                V.shows();
                for(int i=0;i<delay;i++);
                
                
            } 
            for(int i=0;i<9;i++)
                            {
                                cs[i]=0;
                            }
                    
            CLS;
            string s;
            if(t==1){ s= "CIRCLE ";}
            else s = "CROSS ";
            LOCATE(20,20); cout<<s<<"  WONNNNNNNN!!!!\n\n";
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
            t=0; 
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