/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:28 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/19 14:14:16 by pbencze          ###   ########.fr       */
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
    static Zombie* zombieHorde( int N, std::string name );

    private:
    std::string _name;
};

#endif
