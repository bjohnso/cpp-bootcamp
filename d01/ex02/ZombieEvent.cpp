#include <stdio.h>
#include <iostream>
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(){
    return ;
}

ZombieEvent::~ZombieEvent(){
    return ;
}

void ZombieEvent::setZombieType(std::string type){
    this->_type = type;
    return ;
}

Zombie* ZombieEvent::newZombie(std::string name){
    if (this->_type == "")
        this->setZombieType("risen");
    return (new Zombie(name, _type));
}

Zombie* ZombieEvent::randomChump(void)
{
    int     index;
    int     total;
    Zombie  *zombie;
    std::string names[] = {"Zomboi", "Jigsaw", "Rick", "Stacy", "Fatama"};

    if (this->_type == "")
        this->setZombieType("risen");
    total = 5;
    srand(time(0));
    index = rand() % total;
    zombie = this->newZombie(names[index]);
    return (zombie);
}