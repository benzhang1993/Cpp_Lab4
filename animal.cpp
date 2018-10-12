//
// Created by benzh on 2018-10-12.
//

#include "animal.hpp"

/**
 * Animal's default constructor
 */
animal::animal() {
    id = counter++;
    alive = true;
    age = 0;
    xLocation = 0;
    yLocation = 0;
    std::cout << "Animal default constructor is called" << std::endl;
}

/**
 * Animal's 3 parameter constructor
 */
animal::animal(int age, double xCord, double yCord){
    id = counter++;
    alive = true;
    this->age = age;
    xLocation = xCord;
    yLocation = yCord;
    std::cout << "Animal 3param constructor is called" << std::endl;
}

/**
 * Animal's copy constructor
 */
animal::animal(animal& a) {
    this-> id = a.id;
    this-> age = a.age;
    this -> alive = a.alive;
    this -> xLocation = a.xLocation;
    this -> yLocation = a.yLocation;
    std::cout << "Animal copy constructor is called" << std::endl;
}

/**
 * Animal's overloaded insertion operator
 */
std::ostream &operator<<( std::ostream &output, const animal &a) {
    output << "Animal id: " << a.id << std::endl;
    output << "age: " << a.age << std::endl;
    output << "alive? : " << a.alive << std::endl;
    output << "x-cordinate: " << a.xLocation << std::endl;
    output << "y-cordinate: " << a.yLocation << std::endl;
    return output;
}

/**
 * Move the animal by xCord and yCord
 */
void animal::move(double xCord, double yCord) {
    this->xLocation += xCord;
    this->yLocation += yCord;
}