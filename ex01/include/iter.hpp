/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:56:15 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/20 09:44:31 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (*f)(T const &))
{
	for( int i = 0; i < length; i++)
		f(array[i]);
}

template<typename T>
void	print(T const &array)
{
	std::cout << "> " << array << std::endl;
}

#endif