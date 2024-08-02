#include <iostream>

using namespace std;

int main(){

    int LA [] = {3,4,5,6,7,8,9};
    int LB=0;
    int UB = sizeof(LA)/ sizeof(LA[0])-1;
    int MID;
    int LOC=-1;
    int Item=7;

    int BEG= LB, END=UB;
    MID= (BEG + END)/2;

    while(BEG <=END && LA[MID] != Item){

        if(Item < LA[MID]){
            END= MID -1;
        }else{
            BEG= MID +1;
        }

        MID = (BEG + END)/2;
    }

    if(LA[MID] == Item){
        LOC=MID;
    }else{
        LOC=-1;
    }

    if(LOC !=-1){
        cout << "Item found at position: " << LOC << endl;
    } else {
        cout << "Item not found" << endl;
    }


}