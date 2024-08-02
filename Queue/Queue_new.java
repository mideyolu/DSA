public class Queue_new {
    
    int SIZE = 5;
    int front, rear;
    int[] items = new int[SIZE];

    Queue_new() {
        front = rear -1;
    }

    boolean isFull() {
        return rear == SIZE - 1;
    }

    boolean isEmpty() {
        return front == -1 || front > rear;
    }

    void enQueue(int element) {
        if (isFull()) {
            System.out.println("Queue is Full");
        } else {
            if (front == -1) {
                front = 0;
            }
            rear = rear + 1;
            items[rear] = element;
            System.out.println("Added Item " + element + " to the Queue");
        }
    }

    int deQueue() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
            return -1;
        } else {
            int element = items[front];
            front = front + 1;
            if (front >= rear) { // Queue becomes empty
                front = rear = -1;
            }
            System.out.println("Deleted Element " + element + " from Queue");
            return element;
        }
    }

    void display() {
        if (isEmpty()) {
            System.out.println("Queue is empty");
        } else {
            System.out.print("Queue elements are: ");
            for (int i = front; i <= rear; i++) {
                System.out.print(items[i] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Queue_new q = new Queue_new();

        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);
        q.enQueue(4);
        q.enQueue(5);

        q.display();

        q.enQueue(6); 

        q.deQueue();
        q.deQueue();

        q.display();

        q.enQueue(6);

        q.display();
    }
}
