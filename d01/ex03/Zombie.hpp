/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:07:25 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/05 13:45:38 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <stdio.h>
#include <iostream>

class Zombie{
	public:
		Zombie(std::string name, std::string type);
		Zombie(void);
		~Zombie(void);
		std::string getName();
		std::string getType();
		void morph(Zombie *zombie);
		void announce(void);
	
	private:
		std::string _name;
		std::string _type;
		int _morph;
};
#endif
