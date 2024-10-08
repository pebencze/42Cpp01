/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 14:49:59 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 16:37:05 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {
public:
	Weapon( std::string input );
	~Weapon();
	const std::string& getType() const;
	void setType( std::string newType );

private:
	std::string type;
};

#endif
