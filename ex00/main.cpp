/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 12:02:16 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main() {
    Zombie* z = Zombie::newZombie("Newbie");
    z->announce(); //use of announce outside of the function
    delete z;

    std::cout << std::endl;

    Zombie* zlist = new Zombie[5];
    for (int i = 0; i < 5; i++) {
        zlist[i].setName("Zombie" + std::to_string(i));
        zlist[i].announce();
    }
    delete [] zlist;

    std::cout << std::endl;
    
    Zombie::randomChump("Chumpie"); //use of announce inside of the function
    return 0;
}