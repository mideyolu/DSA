#include <iostream>

using namespace std;

int main(){

    int LA[5]= {3,4,5,6,7};
    
    
    int LB= 0;
    int UB= 4;


    int CTR=LB;
    
    cout << "Element:";
    while(CTR <UB){
        cout << " " << LA[CTR] << " ";

        CTR=CTR +1;
    }





    return 0;
}