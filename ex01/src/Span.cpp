/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:10:37 by tsofien-          #+#    #+#             */
/*   Updated: 2025/05/23 20:56:22 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
	: _n(0)
{
}

Span::Span(unsigned int n)
	: _n(n)
{
	if (n == 0)
		throw std::invalid_argument("Span size cannot be zero");
	if (n > 10000)
		throw std::out_of_range("Span size cannot exceed 10000");
}

Span::Span(const Span &src)
{
	_n = src._n;
	_numbers = src._numbers;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		_n = rhs._n;
		_numbers = rhs._numbers;
	}
	return *this;
}

void Span::addNumber(int n)
{
	if (_numbers.size() >= _n)
	{
		setColor(RED);
		throw std::out_of_range("Span is full");
	}
	_numbers.insert(n);
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
	{
		setColor(RED);
		throw std::out_of_range("Not enough numbers to calculate span");
	}
	return *_numbers.rbegin() - *_numbers.begin();
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
	{
		setColor(RED);
		throw std::out_of_range("Not enough numbers to calculate span");
	}

	int minSpan = INT_MAX;
	std::multiset<int>::iterator it = _numbers.begin();
	std::multiset<int>::iterator next = it;
	++next;

	while (next != _numbers.end())
	{
		int span = *next - *it;
		if (span < minSpan)
			minSpan = span;
		++it;
		++next;
	}

	return minSpan;
}

Span::~Span()
{
}