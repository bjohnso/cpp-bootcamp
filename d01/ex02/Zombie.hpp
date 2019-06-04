/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bjohnso <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:07:25 by bjohnso           #+#    #+#             */
/*   Updated: 2019/06/04 12:10:49 by bjohnso          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_CLASS_H
# define ZOMBIE_CLASS_H

#include <stdio.h>
#include <iostream>

class Zombie{
	public:
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void announce(void);
	
	private:
		std::string _name;
		std::string _type;
};
#endif