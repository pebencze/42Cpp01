/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:28 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 11:56:41 by pbencze          ###   ########.fr       */
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
    
    void announce( void ) const;
    static Zombie* newZombie( std::string name );
    static void randomChump(std::string name);
    
    private:
    std::string name;
};

#endif