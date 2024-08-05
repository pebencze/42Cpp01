/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:54:20 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 17:57:12 by pbencze          ###   ########.fr       */
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
	std::ifstream ifs(this->filename);
	std::ofstream ofs(this->newFilename);
	std::string input;
	std::size_t pos;

	if (!ifs.is_open() || !ofs.is_open()) {
	        std::cerr << "Error opening files" << std::endl;
	        return;
	    }

	//ifs >> input; //to read a single word
	input.assign((std::istreambuf_iterator<char>(ifs)),
                 std::istreambuf_iterator<char>());

	//empty string??
	if (s1.empty() || s2.empty()) {
        std::cerr << "Search or replace string is empty" << std::endl;
        return;
    }

	if (s1.compare(s2) != 0) {
		pos = input.find(s1);
		while (pos != std::string::npos)
		{
			input.erase(pos, s1.length());
			input.insert(pos, s2);
			pos = input.find(s1);
		}
	}
	ofs << input;

	ifs.close();
	ofs.close();
}


