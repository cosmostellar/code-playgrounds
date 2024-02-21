#include <iostream>
#include <memory>

std::unique_ptr<int> getData() {
    auto a = std::make_unique<int>(5);
    return a;
}

int main() {
    auto b = getData();
    auto c = std::move(b);

    if (b) {
        std::cout << *b << std::endl;
    } else {
        std::cout << *c << std::endl;  // 5
    }

    return 0;
}