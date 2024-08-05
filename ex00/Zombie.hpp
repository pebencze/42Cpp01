/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 10:54:28 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 11:24:55 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>

class Zombie {
    public:
    Zombie(void);
    ~Zombie(void);
    
    std::string getName() const;
    void setName(std::string name);
    
    void announce( void ) const;
    
    private:
    std::string name;
}


#endif