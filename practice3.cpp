#include <iostream>
int arrayLengthFunction() {
    int myArr[4] = {4, 6, 7, 8};
    for(int i =0; i < sizeof(myArr) / sizeof(int); i++ ) {
        std::cout << myArr[i] << "\n";
    }
    return 0;
}

int main() {

    arrayLengthFunction();
    // multidemensional array example..
    std::string grades[2][3] = {{"A", "B","C"}, {"D", "F"}};
    return 0;
}