/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 13:10:37 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 15:09:27 by tsofien-         ###   ########.fr       */
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
	_numbers.reserve(n);
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
	_numbers.push_back(n);
}

int Span::shortestSpan()
{
	if (_numbers.size() < 2)
	{
		setColor(RED);
		throw std::out_of_range("Not enough numbers to calculate span");
	}

	return *max_element(_numbers.begin(), _numbers.end()) - *min_element(_numbers.begin(), _numbers.end());
}

int Span::longestSpan()
{
	if (_numbers.size() < 2)
	{
		setColor(RED);
		throw std::out_of_range("Not enough numbers to calculate span");
	}
	if (_numbers.size() == 2)
		return *max_element(_numbers.begin(), _numbers.end()) - *min_element(_numbers.begin(), _numbers.end());

	std::vector<int> sortNumbers = _numbers;
	std::sort(sortNumbers.begin(), sortNumbers.end());

	std::vector<int> ranges;
	std::vector<int>::iterator it = sortNumbers.begin();
	for (size_t i = 0; i < sortNumbers.size() - 1; i++)
	{
		ranges.push_back(*(it + 1) - *it);
		it++;
	}

	return *max_element(ranges.begin(), ranges.end());
}

Span::~Span()
{
}