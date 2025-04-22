/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 15:54:24 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 19:18:19 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "utils.hpp"
#include <iostream>
#include <stack>
#include <string>

class MutantStack
{
private:
	std::stack<int> _stack;

public:
	MutantStack(/* args */);
	MutantStack(const MutantStack &src);
	MutantStack &operator=(const MutantStack &rhs);
	~MutantStack();

	// getters & setters
	std::stack<int> getStack();
};

#endif /***************************************************** MUTANTSTACK_HPP */