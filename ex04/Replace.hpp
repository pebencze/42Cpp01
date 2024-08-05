/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:54:17 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 18:59:15 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_H
# define REPLACE_H

# include <iostream>

class Replace {
	public:
		Replace(std::string filename, std::string s1, std::string s2);
		~Replace();

		void replaceFunc();

		std::string filename;
		std::string s1;
		std::string s2;
		std::string newFilename;

};

#endif
