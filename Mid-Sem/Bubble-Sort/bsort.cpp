#include <iostream>

int main() {
    // Sample array
    const int N = 5;
    int temp;
    int DATA[N] = {64, 34, 25, 12, 22};

    for(int k=1; k<N; k++){
        int PTR=0;

        while (PTR <= N-k){
            if(DATA[PTR] > DATA[PTR +1]){
                temp= DATA[PTR];
                DATA[PTR]= DATA[PTR +1];
                DATA[PTR+1]=temp;
            }
            PTR=PTR +1;
        }

    }


    for (int i=0 ; i <5; i++){
        std::cout << DATA[i] << " ";
    }
}
