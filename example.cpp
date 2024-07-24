#include <iostream>

using namespace std;

int main(){

    //array declaration
    int a[15]={3,4,5,6,7,8,9,8,9,10,11,12,13,14,16};
    int counter=0;

    //position
    int UB=14;
    int LB=0;
    int k=LB;

    // //while
    // while(k<=UB){
        
    //     if(a[k] % 2==0){
    //         counter++;
    //     }
    //     k++;
    // }

    for(int i=LB; i<=UB; i++){
        cout << a[i];
    }
    





 





    return 0;
}