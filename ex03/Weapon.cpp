/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:57 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 15:26:19 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon( std::string input ) : type(input) {
	return ;
}

Weapon::~Weapon(){
	return ;
}

const std::string& Weapon::getType(){
	return (this->type);
}

void Weapon::setType( std::string newType ){
	Weapon::type = newType;
}