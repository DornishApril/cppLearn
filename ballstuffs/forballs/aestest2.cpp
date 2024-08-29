#include "stuffs.h"
#include "func.h"
#include "classes.h"

#define FLOOR 21
#define CEIL 2
#define LEFT_WALL 3
#define RIGHT_WALL 70



unsigned long delay = 8000000;
void waller(){
    for(int i=CEIL;i<=FLOOR;i++){

        LOCATE(i,LEFT_WALL);cout<<"|";
        LOCATE(i,RIGHT_WALL);cout<<"|";
        

    }
}

void floorer(){
    for(int i=CEIL;i<=RIGHT_WALL-LEFT_WALL+1+3;i++){
        LOCATE(FLOOR,i);cout<<"0";
        LOCATE(CEIL,i);cout<<"_";
    }
        
}
int main(){

    int x1=8,y1=5;
    int x2=14,y2=8;

    int d1x=1,d1y=0;
    int d2x=2,d2y=2;


    int term=0;
    //int slower=0;
    int del=delay;

    CLS;

    waller();
    floorer();
    while(!term){


        LOCATE(60,40);cout<<"---";
        LOCATE(y1,x1);cout<<" ";
        LOCATE(50,40);cout<<"---";
        LOCATE(60,40);cout<<"---";
        //for(int i=0;i<delay;i++);
        
        if((x1==LEFT_WALL+1)||(x1==RIGHT_WALL-1))
            d1x=-d1x;
        if((y1==FLOOR-1))
            d1y=-d1y;
        int h = FLOOR-y1-1;
        
        if((y1>FLOOR-1)){
            d1y=-d1y;
            y1=FLOOR-1;

        }
        

        if(d1y>0&&d1y>h)
            d1y=h-1;
        if(d1y==0&&y1==FLOOR-1)
        {
            d1y=0;
            d1x=d1x-0.005;
        }
            
        else
        d1y+=1;


        if(d1x<0){
            d1x=0;
        }

        x1+=d1x;
        y1+=d1y;




        LOCATE(y1,x1);cout<<"O";

        // if(slower%2==1)
        // LOCATE(y2,x2);cout<<"O";
        
        LOCATE(70,40);cout<<"---";
        LOCATE(50,40);cout<<"---";
        LOCATE(60,40);cout<<"---";

        for(int i=0;i<delay;i++);

        if(!kbhit()==0){
            d1y=5;
            d1x=1;
            

        }



        
        }

        

    }



