#include <iostream>

int minimum(const int& num1, const int& num2){
    if(num1 < num2) return num1;
    else return num2;
}

int main(){
    int a{}, b{}, result{};
    std::cout << "Enter the first number: "; std::cin >> a;
    std::cout << "Enter the second number: "; std::cin >> b;

    if(a < 0) result = 2 * minimum(a,b);
    else result = minimum(a,b);

    std::cout << "Result: " << result << std::endl;
    return 0;
}