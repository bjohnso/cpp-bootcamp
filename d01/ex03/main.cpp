#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void){
	ZombieHorde zombieHorde = ZombieHorde(10);
    zombieHorde.announce();
}
