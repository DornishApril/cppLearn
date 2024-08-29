#include "stuffs.h"
#include "func.h"
#include "classes.h"


#define ESC 27 // ESC terminates the program
unsigned long delay = 3000000;

void orn(){
    string l1(50,'*');

    LOCATE(1,1);cout<<l1;
    LOCATE(2,1);cout<<l1;
    LOCATE(3,1);cout<<l1;
    LOCATE(4,1);cout<<l1;
    LOCATE(5,1);cout<<l1;
    LOCATE(6,1);cout<<l1;
    LOCATE(7,1);cout<<l1;
}
int main(){
    rocket rocket;
    rocket_90 rock;

    int x=10,y=25;
    int term =0;
    CLS;

    
    int is_rotate =0;
    int pressed =0;
    orn();
    while(!term){
        
        

        if(is_rotate==0){
            rocket.locate(y,x);
        }
        
        else
            rock.locate(y,x);
        
        
        int a=y,b=x;
        int timmy =0;
        
        while(!timmy){
            if( kbhit() != 0 ) // Key pressed?
            {
                timmy=1;
                rock.dislocate(y,x);
                switch(getch()) // Yes
                {
                    case 'a': x=x-2;// Speed up
                    pressed =1;
                            break;
                    case 'd': x=x+2;
                    pressed =1; // Slow down
                                    break;
                    case 's': y=y+2;
                    pressed =1;// Speed up
                                    break;
                    case 'w': y=y-2;
                    pressed =1; // Slow down
                                    break;
                    case 'r': 
                    if(is_rotate==0)
                    is_rotate=1; // Slow down
                    else
                    is_rotate=0; 
                    pressed =1;
                    break; 

                    case ESC: term = true; // Terminate
                }
                      
            }
            
            if(x>180)
            x=180;
            else if (x<5) x=2;
            if(y>180)
            y=180;
            else if(y<5) y=2;

            

            
        }
            //LOCATE(10,10); cout<<"rotation? = "<<is_rotate<<endl;
            
    }
}
    

