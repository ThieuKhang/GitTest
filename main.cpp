#include <iostream>
#include <vector>
#include <string>

void print(const std::vector<std::string> &vec) {
    for(const auto &i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<std::string> list {"good","bad","ok"};
    print(list);
    return 0;
}