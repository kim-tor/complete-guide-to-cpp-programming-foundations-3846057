// Complete Guide to C++ Programming Foundations
// Exercise 05_04
// While Loops, by Eduardo Corpeño 

#include <iostream>
#include <vector>

int main(){
    std::vector<int> playerScores = {12, 25, 31, 47, 58};
    
    auto scorePtr = playerScores.begin();

    while (scorePtr != playerScores.end()){
        std::cout << *scorePtr << " "; // prints the element the scorePtr is currently pointing to
        scorePtr = next(scorePtr, 1); // move the pointer to the next element by one position
    }
    std::cout << std::endl;

    int i = 0;
    do {
        std::cout << playerScores[i] << " ";
        i++; // post fix increment

    } while (i < playerScores.size());

    std::cout << std::endl << std::endl;
    return (0);
}
