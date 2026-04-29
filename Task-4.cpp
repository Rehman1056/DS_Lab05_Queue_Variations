/*#include <iostream>
#include <string>
using namespace std;

class line {
private:
    string* words;
    int limit;
    int start;
    int end;
    int amount;

public:
    line(int size) {
        limit = size;
        words = new string[limit];
        start = 0;
        end = 0;
        amount = 0;
    }

    ~line() {
        delete[] words;
    }

    bool isempty() {
        return amount == 0;
    }

    int getsize() {
        return amount;
    }

    void add(string item) {
        if (amount == limit) {
            cout << "Capacity reached!" << endl;
            return;
        }
        words[end] = item;
        end = (end + 1) % limit;
        amount++;
    }

    void remove() {
        if (isempty()) return;
        start = (start + 1) % limit;
        amount--;
    }

    string peek() {
        if (isempty()) return "-1";
        return words[start];
    }
};

class pile {
private:
    line* sequence;

public:
    pile(int size) {
        sequence = new line(size);
    }

    ~pile() {
        delete sequence;
    }

    void push(string item) {
        int current = sequence->getsize();
        sequence->add(item);
        
        for (int i = 0; i < current; i++) {
            string first = sequence->peek();
            sequence->remove();
            sequence->add(first);
        }
        cout << "Pushed onto stack: " << item << endl;
    }

    void pop() {
        if (sequence->isempty()) return;
        cout << "Popped from stack: " << sequence->peek() << endl;
        sequence->remove();
    }

    string top() {
        return sequence->peek();
    }

    int size() {
        return sequence->getsize();
    }
};

int main() {
    pile stack(5);
    
    stack.push("Alice");
    stack.push("Bob");
    stack.push("Charlie");
    
    cout << "Top is currently: " << stack.top() << endl;
    
    stack.pop();
    
    cout << "After pop, top is now: " << stack.top() << endl;
    
    cout << "Total items inside: " << stack.size() << endl;
    
    return 0;
}*/
