public class Que {
    
    int SIZE =5;
    int front, rear;
    int [] items = new int[SIZE];

    Que(){
        front =-1;
        rear =-1;
    }

    boolean isEmpty() {
        if (front == -1)
            return true;
        else
        return false;
    }

    boolean isFull() {
        if (front == 0 && rear == SIZE - 1) {
            return true;
        }
        return false;
    }
    
    void enQueue(int element) {
        if (isFull()) {
            System.out.println("Queue is full");
        } else {
            if (front == -1){
                front = 0;}
            rear= rear+1;
            items[rear] = element;
            System.out.println("Inserted " + element);
        }
   }

    int deQueue(){
        if(isEmpty()){
            System.out.println("Queue is Empty");
            return -1;
        }else{
            int element = items[front];

            if(front >=rear){
                 front =-1; rear= -1;
            }else {front++;}
            
            System.out.println("Deleted-->" + element);

            return (element);
            
        }
    }

    

    void display(){
        if(isEmpty()){
            System.out.println("Queue is Empty");
        }else{
            System.out.println("Front Index -->" + front);
            System.out.println("Items -->");
            for (int i = front; i <=rear; i++){
                System.out.print(items[i]+" ");
            System.out.println("Rear Index -->" + rear);
            }
        }
    }

    public static void main(String[] args) {
        Que q = new Que();

        q.enQueue(1);
        q.enQueue(2);
        q.enQueue(3);
        q.enQueue(4);
        q.enQueue(5);

        q.display();

        q.deQueue();
        q.enQueue(0);
        q.display();
    }
}
