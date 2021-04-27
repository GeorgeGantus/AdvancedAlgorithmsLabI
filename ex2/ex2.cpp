#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

class MyClass {
   public:
    int nextTic;
    int id;
    int period;
};

class Compare {
   public:
    bool operator()(MyClass a, MyClass b) {
        if (a.nextTic > b.nextTic) {
            return true;
        } else if (a.nextTic == b.nextTic) {
            return a.id > b.id;
        } else {
            return false;
        }
    }
};

bool readLine(priority_queue<MyClass, vector<MyClass>, Compare>& q) {
    string command;
    int id;
    int period;
    cin >> command;
    if (command == "#") return false;
    cin >> id >> period;
    MyClass a;
    a.id = id;
    a.nextTic = period;
    a.period = period;
    q.push(a);
    return true;
}

void ticItem(priority_queue<MyClass, vector<MyClass>, Compare>& q) {
    MyClass aux;
    aux = q.top();
    cout << q.top().id << "\n";
    q.pop();
    aux.nextTic = aux.nextTic + aux.period;
    q.push(aux);
}

int main() {
    priority_queue<MyClass, vector<MyClass>, Compare> q;
    bool flag = readLine(q);
    while (flag) {
        flag = readLine(q);
    }
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        ticItem(q);
    }
}