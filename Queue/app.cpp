#include <iostream>

using namespace std;

class Queue {
public:
    static const int SIZE = 5;  // Use static const for constant size
    int items[SIZE];
    int front, rear;

    Queue() {
        front = -1;
        rear = -1;
    }

    bool isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;  // Check if rear has reached the end
    }

    bool isEmpty() {
        return (front == -1);  // Check if queue is empty
    }

    void enQueue(int element) {
        if (isFull()) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;  // Set front to 0 if queue was empty
            }
            rear++;
            items[rear] = element;
            cout << "Inserted " << element << endl;
        }
    }

    int deQueue() {
        int element;
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            element = items[front];  // Access items array directly
            if (front >= rear) {
                front = -1;  // Reset queue if it becomes empty
                rear = -1;
            } else {
                front++;
            }
            cout << "Deleted -> " << element << endl;
            return element;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Empty Queue" << endl;
        } else {
            cout << "\nFront index -> " << front << endl;
            cout << "Items -> ";
            for (int i = front; i <= rear; i++)
                cout << items[i] << " ";  // Access items array directly
            cout << "\nRear index -> " << rear << endl;
        }
    }
};

int main() {
    Queue q;

    q.deQueue();  // Attempt to dequeue from an empty queue

    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    // 6th element can't be added because the queue is full
    // q.enQueue(6);

    q.display();

    // DeQueue removes element entered first i.e. 1
    q.deQueue();

    // Now we have just 4 elements
    q.display();

    return 0;
}
