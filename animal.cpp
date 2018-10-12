//
// Created by benzh on 2018-10-12.
//

#include "animal.hpp"

animal::animal() {
    id = counter++;
    alive = true;
    age = 0;
    xLocation = 0;
    yLocation = 0;
}

animal::animal(int age, double xCord, double yCord){
    id = counter++;
    alive = true;
    this->age = age;
    xLocation = xCord;
    yLocation = yCord;
}

animal::animal(animal& a) {
    this-> id = a.id;
    this-> age = a.age;
    this -> alive = a.alive;
    this -> xLocation = a.xLocation;
    this -> yLocation = a.yLocation;
}

std::ostream &operator<<( std::ostream &output, const animal &a) {
    output << "Animal id: " << a.id;
    output << "age: " << a.age;
    output << "alive? : " << a.alive;
    output << "x-cordinate: " << a.xLocation;
    output << "y-cordinate: " << a.yLocation;
    return output;
}

void animal::move(double xCord, double yCord) {
    this->xLocation += xCord;
    this->yLocation += yCord;
}