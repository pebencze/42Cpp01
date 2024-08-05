/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:35 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 14:22:58 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie* Zombie::zombieHorde( int N, std::string name )
{
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++){
		horde[i].setName(name);
	}
	return (horde);
}
