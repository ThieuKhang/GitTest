#include <iostream>
#include <vector>

void print(const std::vector<int> &vec) {
    for(const auto &i : vec) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> list {1,2,3,4,5,6,7};
    print(list);
    return 0;
}