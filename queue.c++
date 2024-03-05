#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<char> q;

    // Enqueue
    q.push('A');
    q.push('B');
    q.push('C');
    cout << "Queue: ";
    queue<char> myqueue = q;
    while(!myqueue.empty()) {
        cout << myqueue.front() << " ";
        myqueue.pop();
    }
    cout << endl;

    // Dequeue
    char element = q.front();
    q.pop();
    q.pop();
    cout << "Dequeue: " << element << endl;

    // Peek
    char frontElement = q.front();
    cout << "Peek: " << frontElement << endl;

    // isEmpty
    bool isEmpty = q.empty();
    cout << "isEmpty: " << (isEmpty ? "true" : "false") << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    return 0;
}
