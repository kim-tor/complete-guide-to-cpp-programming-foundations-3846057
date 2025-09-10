// Complete Guide to C++ Programming Foundations
// Challenge 02_13
// Data Types, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

int add_int(float a, double b, long double c){

    // Write your code here
    int truncatedA = static_cast<int>(a);
    int truncatedB = static_cast<int>(b);
    int truncatedC = static_cast<int>(c);

    int total = truncatedA + truncatedB + truncatedC;
    
    return total;
}

int main(){
    float a = 2.1;
    double b = 3.9;
    long double c = 4.6;

    int learnerResult = add_int(a, b, c);
    
    std::cout << "Your code returned: " << learnerResult << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}
