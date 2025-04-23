/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:54:24 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/23 15:25:55 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "utils.hpp"
#include <iostream>
#include <stack>
#include <string>

class MutantStack : public std::stack<int>
{
public:
	MutantStack(/* args */);
	MutantStack(const MutantStack &src);
	MutantStack &operator=(const MutantStack &rhs);
	int &operator[](unsigned int index);
	~MutantStack();

	// getters & setters
	std::stack<int> getStack() const;
	std::deque<int> getContainerC() const;
};

#endif /***************************************************** MUTANTSTACK_HPP */