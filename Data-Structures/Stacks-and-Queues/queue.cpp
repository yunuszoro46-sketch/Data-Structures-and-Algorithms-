#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

  
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front element: " << q.front() << endl; 
    cout << "Back element: "  << q.back()  << endl; 
    cout << "Queue size: "    << q.size()  << endl; 

    cout << "\nProcessing queue (FIFO order):" << endl;
    while (!q.empty()) {
        cout << "Popping element: " << q.front() << endl;
        q.pop(); 
    }

    if (q.empty()) {
        cout << "\nQueue is now empty." << endl;
    }

    return 0;
}
