/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:57:48 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 15:12:37 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <climits>
#include "Span.hpp"

#define SIZE 10000

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
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		resetColor();
	}
	setColor(GREEN);
	std::cout << "This is the longest span: " << sp.longestSpan() << std::endl;
	setColor(PINK);
	std::cout << "This is the shortest span: " << sp.shortestSpan() << std::endl;
	resetColor();
	return 0;
}
