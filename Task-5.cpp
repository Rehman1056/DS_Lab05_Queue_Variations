#include <iostream>
#include <string>
using namespace std;

class pile {
private:
    string* data;
    int limit;
    int current;

public:
    pile(int size) {
        limit = size;
        data = new string[limit];
        current = 0;
    }

    ~pile() {
        delete[] data;
    }

    bool isempty() {
        return current == 0;
    }

    int getcount() {
        return current;
    }

    void push(string item) {
        if (current == limit) return;
        data[current] = item;
        current++;
    }

    void pop() {
        if (isempty()) return;
        current--;
    }

    string top() {
        if (isempty()) return "-1";
        return data[current - 1];
    }
};

class line {
private:
    pile* inbox;
    pile* outbox;

public:
    line(int capacity) {
        inbox = new pile(capacity);
        outbox = new pile(capacity);
    }

    ~line() {
        delete inbox;
        delete outbox;
    }

    void enqueue(string item) {
        inbox->push(item);
        cout << "Enqueued: " << item << endl;
    }

    void moveitems() {
        if (outbox->isempty()) {
            while (!inbox->isempty()) {
                string element = inbox->top();
                inbox->pop();
                outbox->push(element);
            }
        }
    }

    void dequeue() {
        moveitems();
        if (outbox->isempty()) return;
        cout << "Dequeued: " << outbox->top() << endl;
        outbox->pop();
    }

    string front() {
        moveitems();
        if (outbox->isempty()) return "-1";
        return outbox->top();
    }

    int size() {
        return inbox->getcount() + outbox->getcount();
    }
};

int main() {
    line checkout(5);
    
    checkout.enqueue("Alice");
    checkout.enqueue("Bob");
    checkout.enqueue("Charlie");
    
    cout << "Front is currently: " << checkout.front() << endl;
    
    checkout.dequeue();
    
    cout << "After dequeue, front is now: " << checkout.front() << endl;
    
    checkout.enqueue("Diana");
    
    cout << "Total items inside: " << checkout.size() << endl;
    
    return 0;
}
