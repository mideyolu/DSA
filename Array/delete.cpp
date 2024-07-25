#include <iostream>

using namespace std;

int main(){

    int N=5;
    int LA [N]= {2,3,5,6,7};
    int loc=2;

    int i= loc;

    int item = LA[loc];

    while(i<=N){
        LA[i]= LA[i+1];
        i++;
    }

    N=N-1;


    for(i=0; i<N;i++){
        cout << LA[i] << endl;
    }

   
}