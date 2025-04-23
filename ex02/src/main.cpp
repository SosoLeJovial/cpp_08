/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:58:51 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/23 15:18:52 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "MutantStack.hpp"
#include <iterator>

#define SIZE 5

int main(void)
{

	MutantStack stack;

	std::cout << "Pushing 1, 2, 3, 4, 5 into the stack" << std::endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		stack.push(i + 1);
		std::cout << "Pushed: " << i + 1 << std::endl;
	}

	stack.push(1);
	if (!stack.getContainerC().size())
		std::cout << "Container is empty" << std::endl;
	else
		std::cout << "Container is not empty: " << stack.getContainerC().size() << std::endl;
	for (size_t i = 0; i < SIZE; i++)
	{
		stack.getContainerC().begin();
	}

	return 0;
}