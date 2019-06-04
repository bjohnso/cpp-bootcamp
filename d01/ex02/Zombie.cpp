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

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name){
	std::cout << "Zombie : " << _name << " Spawned" << std::endl;
}

Zombie::~Zombie(){
	std::cout << "Zombie : " << _name << " Destroyed" << std::endl
}

Zombie::announce(void){
	std::cout << "I am " << _name << " of class " << _type << "\nRAWR!" << std::endl;
}
