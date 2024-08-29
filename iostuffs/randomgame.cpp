#include <iostream> // Declaration of cin and cout
#include <cstdlib> // Prototypes of srand(), rand():
// void srand( unsigned int seed );
// int rand( void );
#include <time.h> 
using namespace std;

int main(){

long secc;
time( &secc ); // Take the number of seconds and
srand( (unsigned) secc );  
int act,attempt;
char ch='r';
cout<<"Lets playyyy! \n\n\n";
while(ch=='r'){
    act = rand()%15+1;
    cout<<act<<endl<<endl<<endl;
    int count =0;
    int guess =0;
    int found =0;
    cout<<"Make ur guess!>> ";
    while(count<3){
        cin.sync();
        cin.clear();
        
        cin>>attempt;
        if(attempt==act){
            cout<<"\nGood going!\n\n";
            found =1;
            break;
        }
        else if(count<=1)
            cout<<"Try Again!>>";
        count++;

    }
    if(found==0){
        cout<<"You Lost:((\n\n ";
    }
    cout<<"If you wanna play again, press R!!!\n";
    cin.sync();
    cin.clear();
    cin.get(ch);
    
}



    
}

