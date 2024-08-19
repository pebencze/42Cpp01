/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/19 14:23:10 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <sstream>
#include <iostream>

std::string to_string(int value) {
    std::ostringstream oss;
    oss << value;
    return oss.str();
}

int main() {
    Zombie* z = newZombie("Newbie");
    z->announce(); //use of announce outside of the function
    delete z;

    std::cout << std::endl;

    Zombie* zlist = new Zombie[5];
    for (int i = 0; i < 5; i++) {
        zlist[i].setName("Zombie" + to_string(i));
        zlist[i].announce();
    }
    delete [] zlist;

    std::cout << std::endl;

    randomChump("Chumpie"); //use of announce inside of the function
    return 0;
}
