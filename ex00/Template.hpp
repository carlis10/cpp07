/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:13:14 by carlos            #+#    #+#             */
/*   Updated: 2026/05/28 11:30:50 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATE_HPP
 #define TEMPLATE_HPP

 #include <iostream>

 template <typename T>
 void swap (T &a, T &b)
 {
	T c = a;
	a = b;
	b = c;
 }

 template <typename T>
 T min (T a, T b)
 {
	if (a >= b)
		return b;
	return a;
 }

 template <typename T>
 T max (T a, T b)
 {
	if (a <= b)
		return b;
	return a;
 }

#endif