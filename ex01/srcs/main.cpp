/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:57:25 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/10/04 08:57:28 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

#define LENGTH 3

int main()
{
	int	tab[LENGTH] = {1, 2, 3};
	std::string strings[LENGTH] = {"Paris", "London", "Berlin"};

	::iter(tab, LENGTH, print);
	std::cout << std::endl;
	::iter(strings, LENGTH, print);
	std::cout << std::endl;
}