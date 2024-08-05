/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:48 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 16:37:47 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : name(name) {
	return ;
}

HumanB::~HumanB(){
	return ;
}

void HumanB::setWeapon( Weapon &weapon ){
	this->weapon = &weapon;
}

void HumanB::attack() const {
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}
