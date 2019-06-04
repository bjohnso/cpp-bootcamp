#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void){
    Zombie *zombie;

    ZombieEvent zombieEvent = ZombieEvent();

    zombie = zombieEvent.randomChump();
    zombie->announce();
    zombieEvent.setZombieType("skeleton-king");
    delete zombie;
    zombie = zombieEvent.newZombie("Zyrel");
    zombie->announce();
    delete zombie;
}