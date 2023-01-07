#include <iostream>
#include <math.h>

int main(){
    double num{}, result{};

    std::cout << "Enter a number: "; std::cin >> num;
    if(num > 0) result = sqrt(num);
    else result = pow(num, 2.0);

    std::cout << "Result: " << result << std::endl;
    return 0;
}