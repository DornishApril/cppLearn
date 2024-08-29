#include <iostream>

using namespace std;

int factr(int n){
    int answer = 1;
    if(n==0)
        return 1;
    answer = n* factr(n-1);
    cout<<answer<<endl;
    return answer;
}

int main(){

    cout<<"Hello Cucks\n\n"<<endl;

    int result = factr(10);

    return 1;

}