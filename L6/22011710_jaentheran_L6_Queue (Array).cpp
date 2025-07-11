#include <iostream>
using namespace std;

class Queue {
private:
    static const int SIZE = 5;  
    string data[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    void enqueue(string name) {

        if ((rear + 1) % SIZE == front) {
            cout << "Queue is full.\n";
            return;
        }

        if (front == -1 && rear == -1) {
            front = 0;
            rear = 0;
        } else {
            rear = (rear + 1) % SIZE;
        }

        data[rear] = name;
    }

    void dequeue() {

        if (front == -1) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << data[front] << endl;

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }
    }

    void display_queue() {
        if (front == -1) {
            cout << "Queue is empty.\n";
            return;
        }

        int i = front;

        do {
            cout << data[i] << " -> ";
            i = (i + 1) % SIZE;
        } while (i != (rear + 1) % SIZE);

        cout << data[front] << endl;  
    }
};

int main() {
    Queue queue;

    queue.enqueue("Ali");
    queue.enqueue("Alice");
    queue.enqueue("Ahmed");
    queue.enqueue("Hamza");
    queue.enqueue("Sara");

    cout << "Queue:\n";
    queue.display_queue();

    cout << "\nDequeued:\n";
    queue.dequeue();

    return 0;
}
