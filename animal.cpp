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
    output << "Animal id: " << a.id << std::endl;
    output << "age: " << a.age << std::endl;
    output << "alive? : " << a.alive << std::endl;
    output << "x-cordinate: " << a.xLocation << std::endl;
    output << "y-cordinate: " << a.yLocation << std::endl;
    return output;
}

void animal::move(double xCord, double yCord) {
    this->xLocation += xCord;
    this->yLocation += yCord;
}