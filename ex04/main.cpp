/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:47:19 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/20 15:13:14 by pbencze          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "Replace.hpp"

int main()
{
	Replace test1("inexistent_file", "abc", "def"); //inexistent file
	Replace test2("test/test2", "", "def"); //empty string
	Replace test3("test/test3", "abc", "def"); //empty file
	Replace test4("test/test4", "abc\n", "def"); //special characters
	Replace test5("test/test5", "abc", "def"); //works
	Replace test6("test/test6", "a", "def"); //different sizes

	std::cout << "\ntest1: ";
	test1.replaceFunc();
	std::cout << "\ntest2: ";
	test2.replaceFunc();
	std::cout << "\ntest3: ";
	test3.replaceFunc();
	std::cout << "\ntest4: ";
	test4.replaceFunc();
	std::cout << "\ntest5: ";
	test5.replaceFunc();
	std::cout << "\ntest6: ";
	test6.replaceFunc();

	return 0;
}
