// Debugging in C++ with Visual Studio Code
// Challenge 05_04
// Don't Let it Crash and Burn, by Eduardo Corpeño

#include <iostream>

double power(double base, int exponent) {
    if (exponent == 0)
        return 1.0;
    if (exponent < 0)
        return 1.0 / power(base, -exponent);
    return base * power(base, exponent - 1);
}

int main(){
    double base = 2;
    int exponent = 8;
    
    double learnerResult = power(base, exponent);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
