/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:28 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/20 14:34:57 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
    	Zombie();
    	~Zombie(void);

    	std::string getName() const;
    	void setName(std::string name);

    	void announce(void) const;

    private:
    	std::string _name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
