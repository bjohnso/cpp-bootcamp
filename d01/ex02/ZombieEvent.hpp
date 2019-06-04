/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:13:01 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/04 12:40:08 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_CLASS_H
#define ZOMBIEEVENT_CLASS_H
#include <iostream>
#include <stdio.h>
#include "Zombie.hpp"

class ZombieEvent{
	private:
		std::string _type;

	public:
		ZombieEvent(void);
		void setZombieType(std::string type);
		Zombie* newZombie(std::string name);
		~ZombieEvent(void);
		Zombie* randomChump(void);
};
#endif
