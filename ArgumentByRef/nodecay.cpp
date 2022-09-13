#include <iostream>

void printarray(int (&items)[5]) {
    for (int item : items) {
        std::cout << item << " ";
    }
    std::cout << "\nSize of array passed is " << sizeof items << std::endl;
}

void printarraybyref(int items[]) {
    for (int item = 0; item < 5; item++) {
        std::cout << items[item] << " ";
    }
    std::cout << "\nSize of array passed is " << sizeof &items;
}

int main() {
    int items[5] = {1, 2, 3, 4, 5};
    printarray(items);
    printarraybyref(items);
    return 0;
}


