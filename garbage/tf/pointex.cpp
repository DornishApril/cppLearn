#include "syj.h"

int main(){
    string def = "Hippie";
    char* t =&def[0];
    string s = t;
    cout<<s<<endl<<endl<<endl;


    string s1 = "Hello",s2 = "World",s3="Fuck",s4="You";

    char* l1[4];

    l1[0]=&s1[0];
    l1[1]=&s2[0];
    l1[2]=&s3[0];
    l1[3]=&s4[0];

    char** l2 = &l1[0];
            l2 = l2+1;

    cout<<*(l2)<<endl;

    //     char** p;
    // p = (argv+1);
    // string number=(*p);
    




}