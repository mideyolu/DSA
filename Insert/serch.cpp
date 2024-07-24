#include <iostream>
using namespace std;

int main(){

    const int MAX_SIZE = 100; // Maximum size of the array
    int LA[MAX_SIZE] = { 1, 3, 5, 7, 9 }; // Example array
    int N = 5;
    int  item=5;

    int j;

    for (j=0; j<N; j++){

        if (LA[j] == item){
            cout << "Match FOund at index "<< j << endl;
            cout << item << LA[j];
            break;
        }

    }
}

