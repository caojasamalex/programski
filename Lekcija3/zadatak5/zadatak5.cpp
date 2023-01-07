#include <iostream>
#include <math.h>

double maximum(const double &num1, const double &num2){
    if(num1 > num2) return num1;
    else return num2;
}

double minimum(const double &num1, const  double &num2){
    if(num1 < num2) return num1;
    else return num2;
}

int main(){
    double a{}, b{}, result{};
    std::cout << "Enter the first number: "; std::cin >> a;
    std::cout << "Enter the second number: "; std::cin >> b;
    result = (2 * maximum(a,b)) / (1 + minimum(pow(a, 2.0), sqrt(b)));
    
    std::cout << "Result: " << result << std::endl;
    return 0;
}