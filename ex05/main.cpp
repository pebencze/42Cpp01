/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 09:53:52 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/06 09:55:05 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(){
    Harl h;
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("DEBUG");
    h.complain("WARNING");
    h.complain("WARNING");
    h.complain("WARNING");
    h.complain("ERROR");
    h.complain("INVALID");
    return 0;
}