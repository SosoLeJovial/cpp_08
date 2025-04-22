/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:58:51 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 12:55:25 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include "utils.hpp"
#include <cmath>

#define SIZE 100

int generateRandomValue(int min, int max)
{
	return rand() % (max - min + 1) + min;
}

int main(void)
{
	std::vector<int> vec;
	std::list<int> lst;
	std::deque<int> deq;
	srand(time(NULL));

	// fill the containers with some values
	for (int i = 0; i < SIZE; ++i)
	{
		vec.push_back(generateRandomValue(1, 100));
		lst.push_back(generateRandomValue(1, 100));
		deq.push_back(generateRandomValue(1, 100));
	}

	// test easyFind with vector
	setColor(GREEN);
	std::cout << "Testing easyFind with vector:" << std::endl;

	try
	{
		easyFind(vec, 50);
		std::cout << "Found 50 in vector." << std::endl
				  << std::endl;
	}
	catch (const std::exception &e)
	{
		setColor(YELLOW);
		std::cerr << e.what() << std::endl
				  << std::endl;
	}

	// test easyFind with list
	setColor(CYAN);
	std::cout << "Testing easyFind with list:" << std::endl;
	try
	{
		easyFind(lst, 50);
		std::cout << "Found 50 in list." << std::endl
				  << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl
				  << std::endl;
	}

	// test easyFind with deque
	setColor(MAGENTA);
	std::cout << "Testing easyFind with deque:" << std::endl;
	try
	{
		easyFind(deq, 50);
		std::cout << "Found 50 in deque." << std::endl
				  << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl
				  << std::endl;
	}
	resetColor();

	return 0;
}