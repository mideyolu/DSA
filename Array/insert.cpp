#include <iostream>

using namespace std;


int main() {
    int N = 6;
    int DATA[N] = {34, 29, 12, 7, 20, 45}; // Initial array with one extra slot

    int ITEM = 36; // New element to insert
    int LOC = 2; // Zero-based index for the third position (3rd place)

    // Insert the item into the array
    int i = N - 1; // Initialize counter i with index of the last element

    // Move elements to the right to make space for the new item
    while (i >= LOC) {
        DATA[i + 1] = DATA[i]; // Move the current element one position backwards
        i--; // Decrement counter i
    }

    // Insert the new element at the specified location
    DATA[LOC] = ITEM;
    
    // Update the total number of array elements
    N = N + 1;

    // Print the updated array
    for (int i = 0; i < N; i++) {
        cout << DATA[i] << " ";
    }
    cout << endl;

    return 0;
}
