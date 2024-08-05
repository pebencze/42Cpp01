/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:33 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 11:14:50 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void) {
    return ;
}

Zombie::~Zombie(void) {
    std::cout << getName() << "destroyed.";
    return ;
}

Zombie::announce(void) const {
    std::cout << getName() << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::getName() const {
    return (this->name);
}

Zombie::setName(std::string name) {
    this->name = name;
}