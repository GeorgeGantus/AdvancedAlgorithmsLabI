#include <iostream>
#include <string>
#include <vector>

void printVector(std::vector<std::string> v) {
    std::vector<std::string>::iterator it;
    for (it = v.begin(); it != v.end(); it++) {
        std::cout << *it << '\n';
    }
}

void readLine(std::vector<std::string>& rats, std::vector<std::string>& womanChildren, std::vector<std::string>& man, std::string& captain) {
    std::string name;
    std::string role;
    std::cin >> name >> role;
    if (role.compare("rat") == 0) {
        rats.push_back(name);
    } else if (role.compare("man") == 0) {
        man.push_back(name);
    } else if (role.compare("captain") == 0) {
        captain = name;
    } else {
        womanChildren.push_back(name);
    }
}

int main() {
    std::vector<std::string> rats;
    std::vector<std::string> womanChildren;
    std::vector<std::string> man;
    std::string captain;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        readLine(rats, womanChildren, man, captain);
    }
    printVector(rats);
    printVector(womanChildren);
    printVector(man);
    std::cout << captain;
}