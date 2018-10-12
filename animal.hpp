//
// Created by benzh on 2018-10-12.
//

#ifndef CPP_LAB4_ANIMAL_HPP
#define CPP_LAB4_ANIMAL_HPP

#include <iostream>

class animal {
    int age;
    long id;
    bool alive;
    double xLocation, yLocation;

    public:
        static int counter;
        animal();
        animal(animal& a);
        virtual ~animal(){ std::cout << "Animal is destroyed" << std::endl; };
        animal(int age, double xCord, double yCord);
        virtual void move(double xCord, double yCord);
        virtual void sleep(){ std::cout << "Animal is sleeping" << std::endl; };
        virtual void eat(){ std::cout << "Animal is eating" << std::endl; };
        friend std::ostream &operator<<( std::ostream &output, const animal &a);
};




#endif //CPP_LAB4_ANIMAL_HPP
