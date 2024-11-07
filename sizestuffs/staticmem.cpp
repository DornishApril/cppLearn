int main(){
    //int size = 20000000;
    //1MB stack size wud give roughly 250,000 member array limit for int
    //this size gives some kind of memory error, return code=3221225725

    int size1 = 20000000;
    int size2 = 520000;
    //          250000 is the limit
    //  size2 = 200000 works
    //  size2 = 250000 works
    //  size2 = 250001 works
    //  size2 = 300000 works
    //  size2 = 1000000 works not
    //  size2 = 500000 works
    //  size2 = 900000 works not
    //  size2 = 800000 works not
    //  size2 = 500001 works
    //  size2 = 550000 works not
    //  size2 = 520000 works 530000 not



  
    int a[size2];

    


}