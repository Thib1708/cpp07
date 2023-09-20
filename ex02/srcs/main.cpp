/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgiraudo <tgiraudo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:34:02 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/20 09:50:45 by tgiraudo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <Array.hpp>
#include <stdlib.h>
#include <time.h>

// #define MAX_VAL 750
// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
//         Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;//
//     return 0;
// }

#include "Array.hpp"
#include <string>

template <typename T>
void printArray(Array<T> &a)
{
    for (unsigned int i = 0; i < a.getSize(); i++)
    {
        if (i != a.getSize() - 1)
            std::cout << a[i] << ", ";
        else
            std::cout << a[i];
    }
    std::cout << std::endl;
}

int main(void)
{
	{
		std::cout << BLUE << "\n------- EMPTY ARRAY -------\n" << WHITE << std::endl;
		Array<int> empty;
		std::cout << "Empty: ";
		printArray(empty);
	}
	{
		std::cout << BLUE << "\n------- INT ARRAY -------\n" << WHITE << std::endl;
		Array<int> a(10);
		for (int i(0); i < 10; i++)
			a[i] = i;
		std::cout << "Int: ";
		printArray(a);
	}
	{
		std::cout << BLUE << "\n------- STRING ARRAY -------\n" << WHITE << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "gtr";
		std::cout << "String: ";
		printArray(a);
	}
	{
		std::cout << BLUE << "\n------- COPY & ASSIGNEMENT ARRAY -------\n" << WHITE << std::endl;
		Array<std::string> a(10);
		for (int i(0); i < 10; i++)
			a[i] = "gtr";
		Array<std::string> b(a);
		b[5] = "nissan";
		Array<std::string> c = b;
		c[6] = "porsche";
		std::cout << "String a: ";
		printArray(a);
		std::cout << "String b: ";
		printArray(b);
		std::cout << "String c: ";
		printArray(c);
	}
	{
		std::cout << BLUE << "\n------- CATCH EXCEPTION -------\n" << WHITE << std::endl;
		try
		{
			Array<std::string> a(10);
			for (int i(0); i < 11; i++)
				a[i] = "gtr";
			std::cout << "String: ";
			printArray(a);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}