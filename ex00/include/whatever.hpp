/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:54:08 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/13 16:54:14 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> 
const T & max( const T & A, const T & B ) 
{ 
    return A > B ? A : B; 
}

template<typename T> 
const T & min( const T & A, const T & B ) 
{ 
    return A < B ? A : B; 
}

template<typename T> 
void swap( T & A, T & B ) 
{ 
    T swap;

	swap = A;
	A = B;
	B = swap;
}

#endif