/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:48 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/21 15:58:33 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {
	weapon = NULL;
	return ;
}

HumanB::~HumanB(){
	return ;
}

void HumanB::setWeapon( Weapon &weapon ){
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (weapon)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " has no weapon" << std::endl;
}
