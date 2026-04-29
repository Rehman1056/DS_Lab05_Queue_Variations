/*#include <iostream>
using namespace std;

class circularqueue {
private:
    int* data;
    int limit;
    int start;
    int end;
    int count;

public:
    circularqueue(int size) {
        limit = size;
        data = new int[limit];
        start = 0;
        end = 0;
        count = 0;
    }

    ~circularqueue() {
        delete[] data;
    }

    bool isempty() {
        return count == 0;
    }

    bool isfull() {
        return count == limit;
    }

    void enqueue(int item) {
        if (isfull()) {
            cout << "Queue is Full! Cannot insert " << item << endl;
            return;
        }
        data[end] = item;
        end = (end + 1) % limit;
        count++;
        cout << "Inserted: " << item << endl;
    }

    void dequeue() {
        if (isempty()) {
            cout << "Queue is Empty! Nothing to remove." << endl;
            return;
        }
        int dropped = data[start];
        cout << "Dequeued/Removed: " << dropped << endl;
        start = (start + 1) % limit;
        count--;
    }

    void display() {
        if (isempty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Current Queue: ";
        int current = start;
        for (int i = 0; i < count; i++) {
            cout << "[" << data[current] << "] ";
            current = (current + 1) % limit;
        }
        cout << endl << "---" << endl;
    }
};

int main() {
    circularqueue ring(5);
    
    ring.enqueue(10);
    ring.enqueue(20);
    ring.enqueue(30);
    ring.display();
    
    ring.dequeue();
    ring.display();
    
    ring.enqueue(40);
    ring.enqueue(50);
    ring.enqueue(60);
    ring.display();
    
    ring.dequeue();
    ring.enqueue(70);
    ring.display();
    
    return 0;
}*/
