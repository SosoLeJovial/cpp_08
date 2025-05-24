/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:57:48 by tsofien-          #+#    #+#             */
/*   Updated: 2025/05/23 20:56:41 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include "Span.hpp"

#define SIZE 200

int generateRandomNumber(int max)
{
	if (max)
		return rand() % max;
	return rand();
}

int main()
{
	srand(time(0));
	Span sp = Span(SIZE);
	try
	{
		for (size_t i = 0; i < SIZE; i++)
		{
			int random = generateRandomNumber(500);
			// std::cout << "Adding number: " << random << std::endl;
			sp.addNumber(random);
		}
		// sp.addNumber(0);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		resetColor();
	}
	try
	{
		setColor(GREEN);
		std::cout << "This is the longest span: " << sp.longestSpan() << std::endl;
		setColor(PINK);
		std::cout << "This is the shortest span: " << sp.shortestSpan() << std::endl;
		resetColor();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }
