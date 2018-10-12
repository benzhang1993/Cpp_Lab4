//
// Created by benzh on 2018-10-12.
//

#include <iostream>
#include "animal.hpp"
#include "bird.hpp"
#include "canine.hpp"

/**
 * Counter to keep track of animal IDs
 */
int animal::counter = 0;

/**
 * Creates an animal, a bird, and a canine and explores their functions to demonstrate polymorphism
 */
int main() {

    animal *a, *b, *c;
    std::cout << "Creating animal: " << std::endl;
    a = new animal();

    std::cout << std::endl;

    std::cout << "Creating Bird: " << std::endl;
    b = new bird();

    std::cout << std::endl;

    std::cout << "Creating Canine: " << std::endl;
    c = new canine();

    std::cout << std::endl;

    std::cout << "\nMoving animal by 1x and 2y, moving bird by 1x, 2y, 3z, moving canine by 1x and 2y\n" << std::endl;

    a->move(1, 2);
    (dynamic_cast<bird*>(b))->move(1,2,3);
    c->move(1,2);

    /**
     * Not sure why when b is dynamically casted animal constructor and destructor are called.
     */
    std::cout << *a << std::endl << *dynamic_cast<bird*>(b) << *dynamic_cast<canine*>(c) << std::endl;

    a->sleep();
    a->eat();
    b->sleep();
    b->eat();
    c->sleep();
    c->eat();
    dynamic_cast<canine*>(c)->hunt();

    return 0;
}
