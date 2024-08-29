#include "stuffs.h"
#include "func.h"
#include "classes.h"

#define FLOOR 30
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

    int d1x=1,d1y=1;
    int d2x=2,d2y=2;


    int term=0;
    int slower=0;
    CLS;

    waller();
    floorer();
    while(!term){
        int del=delay;

        LOCATE(y1,x1);cout<<" ";
        //for(int i=0;i<delay;i++);
        
        if((x1==LEFT_WALL+1)||(x1==RIGHT_WALL-1))
            d1x=-d1x;
        if((y1==CEIL+1)||(y1==FLOOR-1))
            d1y=-d1y;

        x1+=d1x;
        y1+=d1y;


        if(slower%2==1){
        LOCATE(y2,x2);cout<<" ";
        if((x2==LEFT_WALL+1)||(x2==RIGHT_WALL-1))
            d2x=-d2x;
        if((y2==CEIL+1)||(y2==FLOOR-1))
        d2y=-d2y;

        x2+=d2x;
        y2+=d2y;

        
        LOCATE(y2,x2);cout<<"O";
        del = delay/2;
        }


        LOCATE(y1,x1);cout<<"O";

        // if(slower%2==1)
        // LOCATE(y2,x2);cout<<"O";
        
        LOCATE(40,40);cout<<"---";
        LOCATE(50,40);cout<<"---";
        LOCATE(60,40);cout<<"---";
        for(int i=0;i<delay;i++);
        slower++;


        
        }

        

    }



