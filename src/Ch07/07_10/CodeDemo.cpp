// Complete Guide to C++ Programming Foundations
// Challenge 07_10
// Design a Person Class, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>
#include <vector>
#include <string>
#include <utility>

class Person{
private:
    std::string name;
    float energy;
    float happiness;
    float health;

public:
    // Constructor to initialize 
    Person(const std::string& name, float energy, float happiness, float health) : 
        name(name), energy(energy), happiness(happiness), health(health) {};

// Increase energy based on cals consumed
    void Eat(float calories){
        energy += (calories * 7.0)/200.0;
        if (energy > 100) energy = 100; // Cap energy to 100
    }

// Increase happiness based on time spent play but decreases energy
    void Play(float minutes){
        happiness += minutes / 2.0; 
        energy -= minutes / 3.0; 
    }

// Increase energy and health based on hours of sleep
    void Sleep(float hours){
        if (hours < 0) return; // Invalid input

        energy += hours * 3.75; 
        health += hours * 2.5; 
    }

// Current energy level
    float GetEnergy() const{
        return energy;
    }

// Current happiness level
    float GetHappiness() const{
        return happiness;
    }

// Current health level
    float GetHealth() const{
        return health;
    }
};


int main(){
    // Example 1
    std::string name = "Alice";
    float energy = 40;
    float happiness = 22;
    float health = 80;

    float calories = 300;
    float playMinutes = 120;
    float sleepHours = 5;

    Person sporty(name, energy, happiness, health);
    sporty.Eat(calories);
    sporty.Play(playMinutes);
    sporty.Sleep(sleepHours);

    std::cout << "Your code returned: { ";
    std::cout << "Energy: " << sporty.GetEnergy() << ", ";
    std::cout << "Happiness: " << sporty.GetHappiness() << ", ";
    std::cout << "Health: " << sporty.GetHealth() << " }" << std::endl;
    
    std::cout << std::endl << std::endl;
    return 0;
}