#include <iostream>

// Same as the excersise 3 so there is only excersise 2 file

int absolute(const int &value){
    if(value < 0) return -value;
    else return value;
}

int main(){
    int num{};
    
    std::cout << "Enter a number: "; std::cin >> num;

    std::cout << "Result: " << absolute(num) << std::endl;
    return 0;
}