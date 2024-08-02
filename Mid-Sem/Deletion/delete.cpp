#include <iostream>

using namespace std;

int main(){
    int N=5;
    int LA[N]= {2,3,4,5,6};
    int i=4;
    int item = LA[i];

    while(i< N){
        LA[i]= LA[i+1];

        i++;
    }

    N=N-1;

    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;
}