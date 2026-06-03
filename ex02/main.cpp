/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 12:20:43 by carlos            #+#    #+#             */
/*   Updated: 2026/06/01 14:19:43 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.tpp"

int main()
{
	Array<int> numbers(10);
	int *numbers2 = new int[10];

	for (size_t i = 0; i < 10; i++)
	{
		numbers[i] = i;
		numbers2[i] = i;
	}
	std::cout << "print numbers:" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << numbers[i] << std::endl;
		std::cout << numbers2[i] << std::endl;
	}
	Array<int> copy = numbers;
	Array<int> copy2(numbers);
	std::cout << "print copys:" << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << copy[i] << std::endl;
		std::cout << copy2[i] << std::endl;
	}
	std::cout << "print len copys:" << std::endl;
	std::cout << copy.size() << std::endl;
	std::cout << copy2.size() << std::endl;

	return 0;
}
