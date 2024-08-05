/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:45 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 15:45:46 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H

# include <iostream>
# include "Weapon.hpp"

class HumanA {
public:
	HumanA( std::string input1, Weapon& input2 );
	~HumanA();

	void attack();

	Weapon& weapon;
	std::string name;
};

#endif
