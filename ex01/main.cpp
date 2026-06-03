/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:45:59 by carlos            #+#    #+#             */
/*   Updated: 2026/05/28 11:55:51 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"

void print(const int a)
{
	std::cout << a << std::endl;
}

void sum_print(int a)
{
	a++;
	std::cout << a << std::endl;
}

int main()
{
	const int  len = 5;
	int array[len] = {0,1,2,3,4};
	
	::iter(array, len, print);
	::iter(array, len, sum_print);
	return 0;
}
