#include <iostream>

using namespace std;

int main() {


    int n=6;
    int data[n]= {2,3,4,5,6,7};
    int item_fi=3;

    //adding the item to the end
    data[n+1]=item_fi;
    int loc=0; //c++ )-based indexing for arrays

    while(data[loc] != item_fi){
        loc= loc+1;
    }

    if(loc == n+1){
        cout << "Item " << item_fi << " not found." <<endl;
        loc=0;

    }else{
        cout << "Item " << item_fi << " found at index " << loc << " and position " << loc +1 <<endl;
    }
  


   

    // Step 6: Exit
    return 0;
}
