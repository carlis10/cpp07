/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:15:22 by carlos            #+#    #+#             */
/*   Updated: 2026/06/01 14:10:45 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
 #define ARRAY_HPP

 #include <iostream>
# include <exception>
 template <typename T>
 class Array
 {
 private:
	T *_a;
	unsigned int _size;
 public:
	Array();
	Array(unsigned int n);
	Array(const Array &copy);
	Array &operator=(const Array &copy);
	~Array();
	unsigned int size();
	T& operator[](unsigned int index);
	const T& operator[](unsigned int index) const;
	class OutOfBounds : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
 };

# include "Array.tpp"

#endif