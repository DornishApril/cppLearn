#include <iostream>
#include "stuffs.h"
#include "classes.h"
#include <string>
using namespace std;
#define DELAY 10000000L // Output delay

// Position the cursor in row z and column s
int main()
{
    int yh =0;
int x = 5, y = 3, dx = 1, speed = 0;
string floor(79, '='),
header = "**** JUMPING HEART >UWU< ****";
CLS;
LOCATE(1,25); cout << header;
LOCATE(25,2); cout << floor;
int ceil =79;
int layer = 10;



cheart h(4,"x","o");




while(true) // Let the ball "always" bounce
{ // Terminate by interrupt key (^C)
LOCATE(1,25); cout << header;
//LOCATE(25+3,2); cout << floor;

int bounce =0;
int bounce_pos=79;


h.locate(y,x);


for( long wait = 0; wait < DELAY; ++wait)
;
if(x == 2 || x == 150) {
      
    dx = -dx;
    
} // Bounce off
// a wall?
if( y == 24 ) // On the floor?
{
speed = - speed;
if( speed == 0 ){
    char iio = 'n';
    while(iio=='n'){
        cin.get(iio);
        
    }
    speed = -7;
} // Restart
}
speed += 1; // Acceleration = 1



y += speed; x += dx; // New Position

CLS;
}
}
    

