/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 13:04:04 by carlos            #+#    #+#             */
/*   Updated: 2026/06/01 14:17:52 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include "Array.hpp"
template <typename T>
Array<T>::Array(): _a(NULL), _size(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _a(new T[n]), _size(n)
{
}
template <typename T>
Array<T>::Array(const Array &copy): _a(new T[copy._size]), _size(copy._size)
{
	unsigned int i = 0;
	while (i < _size)
	{
		_a[i] = copy._a[i];
		i++;
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &copy)
{
	if (this != &copy)
	{
		delete[] _a;
		int i = 0;
		_size = copy._size;
		_a = new T[_size];
		while (i < _size)
		{
			_a[i] = copy._a[i];
			i++;
		} 
	}
	return this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw OutOfBounds();
	return _a[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw OutOfBounds();
	return _a[index];
}

template <typename T>
unsigned int Array<T>::size()
{
	return _size;
}

template <typename T>
const char* Array<T>::OutOfBounds::what() const throw()
{
	return ("Out of limit when accesing an element!");
}

template <typename T>
Array<T>::~Array()
{
	delete[] _a;
}

#endif