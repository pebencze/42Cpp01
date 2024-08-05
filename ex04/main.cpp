/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbencze <pbencze@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 16:47:19 by pbencze           #+#    #+#             */
/*   Updated: 2024/08/05 19:41:55 by pbencze          ###   ########.fr       */
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

	test1.replaceFunc();
	test2.replaceFunc();
	test3.replaceFunc();
	test4.replaceFunc();
	test5.replaceFunc();
	test6.replaceFunc();

	return 0;
}
