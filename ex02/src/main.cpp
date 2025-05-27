/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:58:51 by tsofien-          #+#    #+#             */
/*   Updated: 2025/05/27 18:49:15 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "MutantStack.hpp"
#include <iterator>
#include <algorithm>

#define SIZE 10

int generateRandomNumber(int max)
{
	if (max)
		return rand() % max;
	return rand();
}

int main()
{
	MutantStack<int> mstack;

	// int randomNumber = generateRandomNumber(100);

	for (size_t i = 0; i < SIZE; i++)
	{
		mstack.push(generateRandomNumber(100));
	}

	std::cout << GREEN << "Top element: " << mstack.top() << RESET << std::endl;
	std::cout << BLUE << "Elements in the stack:" << RESET << std::endl;

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;

	std::cout << MAGENTA << "Size of the stack: " << mstack.size() << RESET << std::endl;
	mstack.pop();
	std::cout << YELLOW << "After popping, size of the stack: " << mstack.size() << RESET << std::endl;

	while (!mstack.empty())
	{
		mstack.pop();
	}
	std::cout << RED << "Stack cleared. Size of the stack: " << mstack.size() << RESET << std::endl;

	return 0;
}

// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
// 	return 0;
// }
