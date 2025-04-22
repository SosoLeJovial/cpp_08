/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 12:59:44 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 14:37:35 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include "utils.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <exception>

class Span
{
private:
	unsigned int _n;
	std::vector<int> _numbers;

public:
	Span();
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	~Span();
};

#endif /* ******************************************************** SPAN_H */