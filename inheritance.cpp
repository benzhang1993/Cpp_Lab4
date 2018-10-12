//
// Created by benzh on 2018-10-12.
//

#include <iostream>
#include "animal.hpp"
#include "bird.hpp"

int animal::counter = 0;

int main() {
    bird b(2, 5, 10, 20);
    b.move(1,1,1);
    std::cout << b << std::endl;
    b.sleep();
    b.eat();
    return 0;
}
