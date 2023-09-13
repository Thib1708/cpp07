/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:57:25 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/13 17:11:02 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define LENGTH 3

int main()
{
	int	tab[LENGTH] = {1, 2, 3};
	std::string strings[LENGTH] = {"Paris", "London", "Berlin"};

	::iter(tab, LENGTH, print);
	::iter(strings, LENGTH, print);
}