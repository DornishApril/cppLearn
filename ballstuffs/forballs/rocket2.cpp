#include "stuffs.h"
#include "func.h"
#include "classes.h"


#define ESC 27 // ESC terminates the program
unsigned long delay = 20000000;

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
    //orn();
    asteroid ast(0,5,6);

    while(!term){
        
        

        
        rocket.locate(y,x);
        
        
        
        int a=y,b=x;
        int timmy =0;
        
        while(!timmy){
            ast.dislocate();
            ast.upyx();
            ast.locate();
            //for(int i=0;i<delay;i++);
            if( kbhit() != 0 ) // Key pressed?
            {
                timmy=1;
                rocket.dislocate(y,x);
                switch(getch()) // Yes
                {
                    case 'a': x=((x<2)?(x+2):x)-2;// Speed up
                    
                            break;
                    case 'd': x=((x>80)?(x-2):x)+2;
                    // Slow down
                                    break;
                    case 's': y=((y>33)?(y-2):y)+2;
                   
                                    break;
                    case 'w': y=((y<4)?(y+2):y)-2;
                     
                                    break;
                     

                    case ESC: 
                    term = true; // Terminate
                }
                      
            }
            
            

            

            
        }
        // if(y>35){
        //     //CLS;
        //     y=35;
        // }
        // if(x>80){
        //     //CLS;
        //     x=80;
        // }
        // if(y<2){
        //     //CLS;
        //     y=5;
        // }
        // if(x<2){
        //     //CLS;
        //     x=2;
        // }
            //LOCATE(10,10); cout<<"rotation? = "<<is_rotate<<endl;
            
    }
}
    

