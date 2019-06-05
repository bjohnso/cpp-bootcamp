/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:01:06 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/05 13:47:33 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	std::cout << "Zombie : " << _name << " Spawned" << std::endl;
}

Zombie::Zombie(void){
	return ;
}

Zombie::~Zombie(){
	if (_morph == 1)
		std::cout << "Zombie : " << _name << " the " << _type <<" has at long last found the eternal sleep" << std::endl;
	else
		std::cout << "Zombie : " << this->_name << " the " << this->_type << " has pledged their afterlife to the horde\nLokTar!\n";	
}

std::string Zombie::getName(){
	return this->_name;
}

std::string Zombie::getType(){
	return this->_type;
}

void Zombie::announce(void) {
	std::cout << "Alas I am " << _name << " the " << _type << "\nI live once more!" << std::endl;
}

void Zombie::morph(Zombie* zombie){
	_morph = 1;
	this->_name = zombie->_name;
	this->_type = zombie->_type;
	delete zombie;
}
