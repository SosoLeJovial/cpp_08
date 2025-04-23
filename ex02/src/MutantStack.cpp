/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:03 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/23 15:25:49 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack(/* args */)
{
}

MutantStack::MutantStack(const MutantStack &src)
{
	*this = src;
}

MutantStack &MutantStack::operator=(const MutantStack &rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
	}
	return *this;
}

int &MutantStack::operator[](unsigned int index)
{
	if (index >= this->c.size())
		throw std::out_of_range("Index out of range");

	size_t i = 0;
	for (; i < this->c.size(); i++)
	{
		if (i == index)
			break;
	}
	return this->c[i];
}

MutantStack::~MutantStack()
{
}

std::stack<int> MutantStack::getStack() const
{
	return *this;
}

std::deque<int> MutantStack::getContainerC() const
{
	return this->c;
}