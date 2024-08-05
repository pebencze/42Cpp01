/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:33 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 11:56:54 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {
    std::cout << "Zombie created." << std::endl;
    return ;
}

Zombie::~Zombie(void) {
    std::cout << getName() << ": destroyed." << std::endl;
    return ;
}

void Zombie::announce(void) const {
    std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName() const {
    return (this->name);
}

void Zombie::setName(std::string name) {
    this->name = name;
}