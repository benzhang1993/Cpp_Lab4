//
// Created by benzh on 2018-10-12.
//

#ifndef CPP_LAB4_BIRD_HPP
#define CPP_LAB4_BIRD_HPP


#include "animal.hpp"

class bird : public animal{
    double height;

    public:
        bird():animal(){ height = 0; std::cout << "Bird default constructor is called" << std::endl;};
        bird(bird& b):animal(b){ this->height = b.height; std::cout << "Bird copy constructor is called" << std::endl;};
        ~bird();
        bird(int age, double xCord, double yCord, double zCord):animal(age, xCord, yCord){ height = zCord; std::cout << "Bird 4param constructor is called" << std::endl;};
        void move(double xCord, double yCord, double zCord);
        void sleep() override;
        void eat() override;
        friend std::ostream &operator<<( std::ostream &output, bird &a);

};


#endif //CPP_LAB4_BIRD_HPP
