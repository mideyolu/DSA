#include <iostream>

using namespace std;

int main(){

    int LA[5]= {2,3,4,5,6};

    int j=0;
    int item=4;


    while (j<5){
        if(LA[j] == item){
            break;
        }
        j++;
    }

    cout << LA[j] << " " << item;

}