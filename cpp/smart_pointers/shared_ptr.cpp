#include <iostream>
#include <memory>

std::shared_ptr<int> getData() {
    auto a = std::make_shared<int>(5);
    return a;
}

int main() {
    auto b = getData();
    auto c = b;

    std::cout << b.use_count() << std::endl;  // 2

    return 0;
}