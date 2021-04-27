#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    string input;
    cin >> input;
    stack<char> stack;
    for (int i = input.length() - 1; i >= 0; i--) {
        if (!stack.empty()) {
            if (stack.top() == input[i]) {
                stack.pop();
            } else {
                stack.push(input[i]);
            }
        } else {
            stack.push(input[i]);
        }
    }
    while (!stack.empty()) {
        cout << stack.top();
        stack.pop();
    }
}