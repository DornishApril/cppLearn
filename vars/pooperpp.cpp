#include <iostream>
#include <climits> // Definition of INT_MIN, ...
#define ss " ----- "
#define sst " -----      size(bytes)--: "
using namespace std;

class whatevercunt{
    int pp;
    int cocaine;
public:
    whatevercunt(int){

    }

};
int main()
{
whatevercunt mooual(10);
long long int a=10344488488;
long long b=10344488488;

short ab =5;
unsigned short abb=-5;

cout<<ULONG_LONG_MAX;
cout<<endl<<a<<endl<<b<<endl;


/*LONG and INT type are same in byte size*/
/*int size varies on pc. mine is 32 bit pc so its size is 4 byte or 32 bit*/
/*The int (integer) type is tailor-made for computers and adapts to the length of a register on the computer. For 16-bit computers, int is thus equivalent to short, whereas
for 32-bit computers int will be equivalent to long.*/

cout<<"Range of different integer-type constants"<<endl;

cout<<"short :";
cout<<SHRT_MIN<<ss<<SHRT_MAX<<sst<<sizeof(ab)<<endl;

cout<<"unsigned short :";
cout<<"0"<<ss<<USHRT_MAX<<sst<<sizeof(abb)<<endl;

cout<<"int :";
cout<<INT32_MIN<<ss<<INT32_MAX<<sst<<sizeof(INT32_MAX)<<endl;

cout<<"unsigned int:";
cout<<"0"<<ss<<UINT32_MAX<<sst<<sizeof(UINT32_MAX)<<endl;

cout<<"long:"<<LONG_MIN<<ss<<LONG_MAX<<sst<<sizeof(LONG_MIN)<<endl;

cout<<"unsigned long:"<<"0"<<ss<<ULONG_MAX<<sst<<sizeof(ULONG_MAX)<<endl;

cout<<"long long:"<<LONG_LONG_MIN<<ss<<LONG_LONG_MAX<<sst<<sizeof(LONG_LONG_MAX)<<endl;

cout<<"unsigned long long:"<<"0"<<ss<<ULONG_LONG_MAX<<sst<<sizeof(ULONG_LONG_MAX)<<endl;


}