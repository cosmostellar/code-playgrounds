#include <iostream>

void modifyData(int** data) {
    int* temp = new int(10);
    delete *data;
    *data = temp;
    std::cout << **data << std::endl;  // 10
}

int main() {
    int* data = new int(5);
    modifyData(&data);
    std::cout << *data << std::endl;  // 10

    return 0;
}