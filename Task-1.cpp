/*#include <iostream>
#include <string>
using namespace std;

class myqueue {
private:
    string* data;
    int capacity;
    int tail;

public:
    myqueue(int size) {
        capacity = size;
        data = new string[capacity];
        tail = 0;
    }

    ~myqueue() {
        delete[] data;
    }

    bool isempty() {
        return tail == 0;
    }

    bool isfull() {
        return tail == capacity;
    }

    void enqueue(string item) {
        if (isfull()) {
            cout << "Queue is Full! Cannot insert '" << item << "'" << endl;
            return;
        }
        data[tail] = item;
        tail++;
        cout << "Inserted: " << item << endl;
    }

    void dequeue() {
        if (isempty()) {
            cout << "Queue is Empty! Nothing to remove." << endl;
            return;
        }
        
        string dropped = data[0];
        cout << "Dequeued/Removed: " << dropped << endl;

        for (int i = 0; i < tail - 1; i++) {
            data[i] = data[i + 1];
        }

        tail--;
    }
    
    void display() {
        if (isempty()) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Current Queue: ";
        for (int i = 0; i < tail; i++) {
            cout << "[" << data[i] << "] ";
        }
        cout << endl << "---" << endl;
    }
};

int main() {
    myqueue line(5);
    
    line.enqueue("Alice");
    line.enqueue("Bob");
    line.enqueue("Charlie");
    line.display();
    
    line.dequeue();
    line.display();
    
    line.enqueue("Diana");
    line.enqueue("Eve");
    line.enqueue("Frank");
    line.display();
    
    return 0;
}*/
