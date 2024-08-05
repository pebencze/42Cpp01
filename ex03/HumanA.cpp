/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:42 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 16:37:39 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "HumanA.hpp"

HumanA::HumanA( std::string input1, Weapon& input2 ) : weapon(input2), name(input1) {
	return ;
}

HumanA::~HumanA(){
	return ;
}

void HumanA::attack() const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}

