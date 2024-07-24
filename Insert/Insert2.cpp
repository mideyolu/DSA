#include <iostream>

using namespace std;


/*
algorithm
Step 1: Set ITEMLA [New Element]
Step 2: Set K [Position]

[FOR LOOP]
Step 3: Repeat for I = N to I >= K:
[Move J + 1st clement upward.] Set LA(J+1) ← LA[J).
[End of loop,]
Step 4: Set LA[K]= ITEMLA [Adding the new element]
Step 3: [Reset the number N of elements in LA.) Set N: ← N + I.
Step 4: Exit
*/



int main(){
    int k=0;
    int item=4;
    int size=6;

    int LA[30]= {2,3,5,6,7,8};
    

    //insertion

    for (int i= size; i>=k; i--){
        LA[i+1]= LA[i];
    }

    LA[k]= item;
    size++;

    cout << "Final transversing:" <<endl;

    for (int i=0; i <size; i++){
        cout << LA[i];
    }
    
}