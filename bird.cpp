//
// Created by benzh on 2018-10-12.
//

#include "bird.hpp"

bird::~bird() {

}

void bird::move(double xCord, double yCord, double zCord) {
    animal::move(xCord, yCord);
    this->height += zCord;
}

void bird::sleep() {
    std::cout << "Bird is sleeping" << std::endl;
}

void bird::eat() {
    std::cout << "Bird is eating" << std::endl;
}

std::ostream &operator<<( std::ostream &output, bird &a) {
    output << (animal) a << "z-cordinate: " << a.height << std::endl;
    return output;
}