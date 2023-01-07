#include <iostream>

int readNumber(){
    int x{};
    std::cout << "Enter a number: "; std::cin >> x;

    return x;
}

void writeNumber(const int &num){
    std::cout << "The answer is: " << num << std::endl;
}