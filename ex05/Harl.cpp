/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:09:47 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/06 10:16:55 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {
    std::cout << "Harl created." << std::endl;
}

Harl::~Harl() {
    std::cout << "Harl destroyed." << std::endl;
}

void    Harl::complain( std::string level ) {
    void (Harl::*funcPtr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    for (int i = 0; i < 4; i++) {
        if (level == levels[i]) {
            (this->*funcPtr[i])();
            return;
        }
    }
    std::cout << "Invalid level." << std::endl;
}

void    Harl::_debug( void ) {
    std::cout << "I love having extra bacon for my \
    7XL-double-cheese-triple-pickle-special- ketchup burger. \
    I really do!" << std::endl;
}

void    Harl::_info( void ) {
    std::cout << "I cannot believe adding extra bacon cost more money. \
    You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void    Harl::_warning( void ) {
    std::cout << "I’ve been coming here for years and you still have not \
    put in enough bacon!" << std::endl;
}

void    Harl::_error( void ) {
    std::cout << "I can’t eat this. You forgot the bacon!" << std::endl;
}
