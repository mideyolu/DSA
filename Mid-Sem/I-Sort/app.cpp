#include <iostream>

using namespace std;

int main(){

    int LA[5]= {34,5,6,89,0};
    int temp, i;


    for (int k=1; k<5; k++){
        temp = LA[k];
        i=k-1;


        while(i>=0 && temp <LA[i]){
            LA[i+1]=LA[i];

            i--;
        }

        LA[i+1]= temp;
    }




    for (i=0; i<5; i++){
        cout << LA[i];
    }



    return 0;
}