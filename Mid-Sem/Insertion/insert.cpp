#include <iostream>

using namespace std;

int main(){
    int N=5;
    int LA[N]={2,3,4,5,6};

    int i= 4;
    int item=0;
    int loc=0;

    while(i>= loc){
        LA[i+1]= LA[i];

        i--;
    }

    LA[loc]=item;
    N++;


    for (int i=0; i<5; i++){
        cout << LA[i] << " ";
    }


    return 0;
}