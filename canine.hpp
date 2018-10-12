//
// Created by benzh on 2018-10-12.
//

#ifndef CPP_LAB4_CANINE_HPP
#define CPP_LAB4_CANINE_HPP


#include "animal.hpp"

class canine : public animal{

    public:
        canine():animal(){ std::cout << "Canine default constructor is called " << std::endl; };
        canine(int age, double xCord, double yCord):animal(age, xCord, yCord){ std::cout << "Canine 3param constructor is called " << std::endl; };
        canine(canine& c):animal(c) { std::cout << "Canine copy constructor is called " << std::endl; }
        ~canine() { std::cout << "Canine is destructed" << std::endl; }
        void sleep() override;
        void eat() override;
        void hunt();
};


#endif //CPP_LAB4_CANINE_HPP
