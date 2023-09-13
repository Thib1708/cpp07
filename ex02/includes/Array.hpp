/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 13:11:57 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/13 19:20:19 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

# define RESET		"\033[0m"
# define BLACK		"\033[30m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"
# define CYAN		"\033[36m"
# define WHITE		"\033[37m"

template <typename T>
class Array {
    private:
        T       *_array;
        size_t  _size;
    public:
        Array( void );
        Array( size_t n );
        ~Array( void );
        Array( const Array & );
        Array& operator=( const Array &);

        size_t  getSize( void ) const;
        T &operator[](unsigned int i) const;
        class OutOfBounds: public std::exception {
				public :
						virtual const char	*what( void ) const throw();
			};
};

# include "Array.tpp"

#endif