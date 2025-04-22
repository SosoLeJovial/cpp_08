/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:01:03 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 19:18:13 by tsofien-         ###   ########.fr       */
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
		this->_stack = rhs._stack;
	}
	return *this;
}
MutantStack::~MutantStack()
{
}

// getters & setters
std::stack<int> MutantStack::getStack()
{
	return this->_stack;
}