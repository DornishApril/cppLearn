#include <iostream>

using namespace std;


int call_count(){
    static int z;

    return z++;
}


int call_count1(){
    static int z;

    return ++z;
}

int call_count2(){
//     You can give a static local variable an initialization value. This value is assigned
// only once, at program start-up—not each time the block of code is entered, as with
// normal local variables.
    static int z=30;
    return z++;
    
}

int main(){
    for(int i=0;i<10;i++){
        cout<<(i+1)<<"th time of func being called returns: "<<call_count()<<endl;
    }

    cout<<endl<<endl;

    for(int i=0;i<10;i++){
        cout<<(i+1)<<"th time of func being called returns: "<<call_count1()<<endl;
    }


    cout<<endl<<endl;

    for(int i=0;i<10;i++){
        cout<<(i+1)<<"th time of func being called returns: "<<call_count2()<<endl;
    }
}