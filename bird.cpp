//
// Created by benzh on 2018-10-12.
//

#include "bird.hpp"

/**
 * Destructor for bird
 */
bird::~bird() {
    std::cout << "Bird is destroyed" << std::endl;
}

/**
 * Moves the bird
 * @param xCord x coordinate of the bird
 * @param yCord y coordinate of the bird
 * @param zCord z coordinate of the bird
 */
void bird::move(double xCord, double yCord, double zCord) {
    animal::move(xCord, yCord);
    this->height += zCord;
}

/**
 * Bird's sleeping function
 */
void bird::sleep() {
    std::cout << "Bird is sleeping" << std::endl;
}

/**
 * Bird's eating function
 */
void bird::eat() {
    std::cout << "Bird is eating" << std::endl;
}

/**
 * Bird's overloaded insertion operator
 */
std::ostream &operator<<( std::ostream &output, bird &a) {
    output << (animal) a << "z-cordinate: " << a.height << std::endl;
    return output;
}