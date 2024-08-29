#include "stuffs.h"
#include "func.h"
#include "classes.h"

#define FLOOR 30
#define CEIL 2
#define LEFT_WALL 3
#define RIGHT_WALL 70



unsigned long delay = 20000000;
void waller(){
    for(int i=CEIL;i<=FLOOR;i++){

        LOCATE(i,LEFT_WALL-1);cout<<"|";
        LOCATE(i,RIGHT_WALL+1);cout<<"|";
        

    }
}

void floorer(){
    for(int i=CEIL;i<=RIGHT_WALL-LEFT_WALL+1+3;i++){
        LOCATE(FLOOR+1,i);cout<<"*";
        LOCATE(CEIL-1,i);cout<<"_";
    }
        
}
int main(){

    int x=LEFT_WALL+3,y=10;
    int dx=2,dy=3;

    int d1=2,d2=2;

    int term=200;

    while(--term){

        cout<<x<<ss<<dx<<ss<<y<<ss<<dy<<endl;

        
        if((x==(LEFT_WALL+dx+1))){
            x=LEFT_WALL+1;
            dx=-dx;
        }
        if((x>=(RIGHT_WALL-d2))){
            x=RIGHT_WALL-1;
            dx=-dx;
        }
        x+=dx;

        if((y<=(CEIL+d1))){
            y=CEIL+1;
            dy=-dy;
        }
        if((y>=(FLOOR-d2))){
            y=FLOOR-1;
            dy=-dy;
        }
        x+=dx;
        y+=dy;

        
        



    }



}