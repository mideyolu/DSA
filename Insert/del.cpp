#include <iostream>
using namespace std;


/*
algorithm
Step 1: Set ITEMLA ← (K)
Step 2: Repeat for I = K to N - 1:
[Move J + 1st clement upward.] Set LA(J) ← LA[J + I).
[End of loop,]
Step 3: [Reset the number N of elements in LA.) Set N: ← N - I.
Step 4: Exit
*/

int main() {
    const int MAX_SIZE = 100; // Maximum size of the array
    int LA[MAX_SIZE] = { 1, 3, 5, 7, 9 }; // Example array
    int N = 5;

    int K = 0; 
    int ITEMLA = K;

    // Step 2: Repeat for I = K to N - 1:
    for (int I = K; I <N; I++) {
        // [Move J + 1st element upward.] Set LA[J] ← LA[J + 1].
        LA[I] = LA[I + 1];
    }
    // [End of loop.]

    // Step 3: [Reset the number N of elements in LA.] Set N ← N - 1.
    N--;

    // Displaying the updated array
    cout << "Updated array after deletion:" << endl;
    for (int i = 0; i < N; i++) {
        cout << LA[i] << " ";
    }
    cout << endl;

    // Step 4: Exit.
    return 0;
}
