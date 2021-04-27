#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n, m;
    map<string, string> ipToName;
    string name;
    string ip;
    string command;

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> name >> ip;
        ipToName[ip] = name;
    }
    for (int i = 0; i < m; i++) {
        cin >> command >> ip;
        ip.pop_back();
        cout << command << " " << ip << "; #" << ipToName[ip] << endl;
    }
}