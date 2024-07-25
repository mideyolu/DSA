#include <iostream>

using namespace std;


int main(){
    
    int N=5;
    int LA [N]= {2,3,5,6,7};
    int loc=2;
    int item=4;

    int i =N;

    while(i>= loc){
        LA[i+1]= LA[i];

        i--;
    }

    LA[loc]= item;
    N++;

    for(i=0; i<N;i++){
        cout << LA[i] << endl;
    }

}