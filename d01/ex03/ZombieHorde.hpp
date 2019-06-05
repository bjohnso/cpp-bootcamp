/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:38:43 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/05 13:40:53 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_CLASS_H
#define ZOMBIEHORDE_CLASS_H
#include <iostream>
#include <stdio.h>
#include "Zombie.hpp"

class ZombieHorde{

	private:
		Zombie *_zombie;
		std::string _type;
		int _hordeSize;

	public:
		ZombieHorde(int hordeSize);
		ZombieHorde(void);
		~ZombieHorde(void);
		Zombie* newZombie(std::string name);
		Zombie* randomChump(void);
		void announce(void);
};
#endif
