#include <stdio.h>
#include <string>
#include <iostream>
#include "Pony.hpp"


    Pony::Pony(std::string name) 
    : _name(name){
        std::cout << "Giddy up " << this->_name << std::endl;
    }

    Pony::~Pony(){
        std::cout << "Bye Bye " << this->_name << std::endl;
    }

    void Pony::jump(){
        std::cout << "How High?" << std::endl;
        std::cin >> _jumpHeight;
        std::cout << _name << " jumped " << _jumpHeight << " meters" << std::endl;
    }