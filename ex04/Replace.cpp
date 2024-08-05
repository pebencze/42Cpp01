/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:54:20 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 19:45:24 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2) : filename(filename), s1(s1), s2(s2) {
	this->newFilename = filename + ".replace";
}

Replace::~Replace () {

}

void Replace::replaceFunc() {
	std::ifstream ifs(filename.c_str(), std::ios::in | std::ios::binary);

	if (!ifs.is_open()) {
	    std::cerr << "Error opening files." << std::endl;
	    return;
	}

	std::ofstream ofs(newFilename.c_str(), std::ios::out | std::ios::binary);
	if (!ofs.is_open()) {
	    std::cerr << "Error opening files" << std::endl;
		ifs.close();
	    return;
	}

	//ifs >> input; //to read a single word
	std::string input;
	input.assign((std::istreambuf_iterator<char>(ifs)),
                 std::istreambuf_iterator<char>());

	if (input.empty() || s1.empty() || s2.empty()) {
        std::cerr << "File, search string or replace string is empty." << std::endl;
		ifs.close();
		ofs.close();
        return;
    }

	if (s1.compare(s2) != 0) {
		std::size_t pos = input.find(s1);
		while (pos != std::string::npos)
		{
			input.erase(pos, s1.length());
			input.insert(pos, s2);
			pos = input.find(s1, pos + s2.length());
		}
	}
	ofs << input;

	ifs.close();
	ofs.close();
}


