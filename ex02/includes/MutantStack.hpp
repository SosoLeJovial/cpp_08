/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:54:24 by tsofien-          #+#    #+#             */
/*   Updated: 2025/05/21 23:08:44 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "utils.hpp"
#include <iostream>
#include <stack>
#include <string>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(/* args */) {}

	MutantStack(const MutantStack &src)
	{
		*this = src;
	}

	MutantStack &operator=(const MutantStack &rhs)
	{
		if (this != &rhs)
		{
			this->c = rhs.c;
		}
		return *this;
	}

	// iterator
	typedef typename std::deque<T>::iterator iterator;
	iterator begin()
	{
		return this->c.begin();
	}

	iterator end()
	{
		return this->c.end();
	}

	typedef typename std::deque<T>::const_iterator const_iterator;
	const_iterator begin() const
	{
		return this->c.begin();
	}

	const_iterator end() const
	{
		return this->c.end();
	}

	~MutantStack<T>(){};
};

#endif /***************************************************** MUTANTSTACK_HPP */