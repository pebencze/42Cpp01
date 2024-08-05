/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:40 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 14:34:48 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <sstream>

int main(int ac, char **av) {
	if (ac == 2) {
		int N;
		std::stringstream ss;

		ss << av[1];
		ss >> N;
		Zombie *zombies = Zombie::zombieHorde(N, "Zzzombieee");
		for (int i = 0; i < N; i++){
			zombies[i].announce();
		}
		delete [] zombies;
	} else {
		std::cout << "Please provide a number." << std::endl;
	}
    return 0;
}
