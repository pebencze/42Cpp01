/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:51 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 16:38:05 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H

# include <iostream>
# include "Weapon.hpp"

class HumanB {
public:
	HumanB( std::string name );
	~HumanB();

	void attack() const ;
	void setWeapon( Weapon &weapon );


private:
	Weapon* weapon;
	std::string name;
};

#endif
