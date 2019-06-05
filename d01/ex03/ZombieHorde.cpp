/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:41:02 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/05 13:49:04 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int hordeSize) : _hordeSize(hordeSize){
    this->_zombie = new Zombie[hordeSize];

	for (int i = 0; i < _hordeSize; i++){
		this->_zombie[i].morph(this->randomChump());
	}

	return ;
}

ZombieHorde::~ZombieHorde(){
	for (int i = 0; i < _hordeSize; i++){
		std::cout << this->_zombie[i].getName() << " the " << this->_zombie[i].getType() << " has finally succumb to the eternal sleep!" << std::endl;
	}
    return ;
}

Zombie* ZombieHorde::newZombie(std::string name){
	if (this->_type == "")
		_type = "Mongrel of War";
	return (new Zombie(name, _type));
}

Zombie* ZombieHorde::randomChump(void)
{
    int     index;
    int     total;
    Zombie  *zombie;
    std::string names[] = {"Zomboi", "Jigsaw", "Rick", "Stacy", "Fatama"};

    total = 5;
    srand(time(0));
    index = rand() % total;
    zombie = this->newZombie(names[index]);
    return (zombie);
}

void ZombieHorde::announce(void){
	for (int i = 0; i < _hordeSize; i++){
		this->_zombie[i].announce();
	}
}
