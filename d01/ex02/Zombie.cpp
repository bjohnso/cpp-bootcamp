/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:01:06 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/04 12:07:15 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type){
	std::cout << "Zombie : " << _name << " Spawned" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie : " << _name << " the " << _type <<" has at long last found the eternal sleep" << std::endl;
}

void Zombie::announce(void) {
	std::cout << "Alas I am " << _name << " the " << _type << "\nI live once more!" << std::endl;
}
