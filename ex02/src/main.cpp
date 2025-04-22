/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsofien- <tsofien-@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:58:51 by tsofien-          #+#    #+#             */
/*   Updated: 2025/04/22 19:17:48 by tsofien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.hpp"
#include "MutantStack.hpp"

int main(void)
{

	std::cout << "====================" << std::endl;
	std::cout << "=== Hello World! ===" << std::endl;
	std::cout << "====================" << std::endl;

	MutantStack stack;
	stack.getStack().push(1);
	stack.getStack().push(2);
	stack.getStack().push(3);
	stack.getStack().push(4);

	std::cout << "stack.size() = " << stack.getStack().size() << std::endl;

	for (size_t i = 0; i < stack.getStack().size(); i++)
	{
		std::cout << "stack[" << i << "] = " << stack.getStack().top() << std::endl;
		stack.getStack().pop();
	}

	return 0;
}