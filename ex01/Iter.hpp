/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlos <carlos@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:33:23 by carlos            #+#    #+#             */
/*   Updated: 2026/05/28 11:56:44 by carlos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
 #define ITER_HPP

  #include <iostream>

   template <typename T>
   void iter (T* a, const int len, void (*funtion) (T b))
   {
	int i = 0;
	while (i < len)
	{
		funtion(a[i]);
		i++;
	}
   }
#endif