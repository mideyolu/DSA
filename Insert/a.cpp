#include <iostream>

int main() {
    int N; // Number of elements in the array
    std::cout << "Enter the number of elements: ";
    std::cin >> N;

   //int DATA[N + 1]; // Array of size N + 1 to accommodate the extra ITEM at the end
    int DATA[N];
    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < N; i++) {
        std::cin >> DATA[i];
    }

    int ITEM; // Item to search for
    std::cout << "Enter the item to search: ";
    std::cin >> ITEM;

    // 1. Insert ITEM at the end of DATA
    DATA[N+1] = ITEM;

    // 2. Initialize counter
    int LOC = 1;

    // 3. Search for ITEM
    while (DATA[LOC] != ITEM) {
        LOC++;
    }

    // 4. Successful?
    if (LOC == N + 1) {
        LOC = 0;
    }

    // 5. Exit
    if (LOC == 0) {
        std::cout << "Item not found in the array." << std::endl;
    } else {
        std::cout << "Item found at position: " << LOC << std::endl;
    }

    return 0;
}
