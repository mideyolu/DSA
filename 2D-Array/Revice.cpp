#include <iostream>

using namespace std;

int main(){
    //declaration at compile time
    // int a[2][3]= {{2,3,4},
    //           {5,6,7}
    //         };

    // cout << a[0][1];


    int arr[2][3];

    cout << "Enter the elements:"<<endl;

    for (int i=0; i <2; i++){
        for (int j=0; j<3; j++){
            cin >> arr[i][j];
            cout<< endl;
        }
    }


    return 0;
}