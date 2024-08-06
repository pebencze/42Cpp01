/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:09:43 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/06 10:02:22 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
    
    private:
        void _debug( void );
        void _info( void );
        void _warning( void );
        void _error( void );
};

#endif