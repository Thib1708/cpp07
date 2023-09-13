/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:56:15 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/13 17:09:24 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, int length, void (*f)(T &))
{
	for( int i = 0; i < length; i++)
		f(array[i]);
}

template<typename T>
void	print(T &array)
{
	std::cout << array << std::endl;
}

#endif