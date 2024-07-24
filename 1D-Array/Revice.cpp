#include <iostream>

using namespace std;

int main(){

    int a[30];
    int size, i, pos, val, zero_val, del_pos;

    cout << "Enter the size element:";
    cin >> size;

    for (i=0; i<size; i++){
        cout <<"Enter the values at index " << i << ":";
        cin>> a[i];
    }

    for (i=0; i <size; i++){
        cout << a[i];
    }

    
    /*inserting a value at a psoition */

    cout << "Enter the position:";
    cin >> pos;

    if((pos <=0) || (pos > size)){
        cout << "invalid Position. Enter a values between 1 and " << size;
        return 1;
    }else{

        //inserting at any position
        cout << "Enter the value:";
        cin >> val;

        for (i= size-1; i>=pos -1; i--){
            a[i+1]= a[i];
        }
          
          //inserting a new value
        a[pos-1]= val;
        size++;

        // inserting at postion zero
        cout << "Enter the Zero value:";
        cin >> zero_val;

        for (i=size-1; i>=0;i--){
            a[i+1]=a[i];
        }
        a[0]=zero_val;
        size++;
    }

     /*Deleting a value at a psoition */

    cout << "Enter the position:";
    cin >> del_pos;

    if ((del_pos <0) || (del_pos > size)){
        cout << "invalid Position. Enter a values between 1 and " << size;
        return 1;
    }else{
        for(i=del_pos-1; i<size-1; i++){
            a[i]= a[i+1];
        }
        size--;
    }


    //deleting the zero index

    for(i=0; i<size-1; i++){
        a[i]= a[i+1];
    }
    size--;


    cout << "Final transversing:" <<endl;

    for (i=0; i <size; i++){
        cout << a[i];
    }




}