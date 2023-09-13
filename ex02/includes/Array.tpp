/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibaultgiraudon <thibaultgiraudon@stud    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:24:35 by thibaultgir       #+#    #+#             */
/*   Updated: 2023/09/13 19:29:14 by thibaultgir      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array( void ): _size(0) {
	std::cout << "[ ARRAY ] Constructor called" << std::endl;
	this->_array = new T[0];
	return ;
}

template <typename T>
Array<T>::Array( size_t n ): _size(n) {
	std::cout << "[ ARRAY ] Constructor called" << std::endl;
	this->_array = new T[n];
	return ;
}

template <typename T>
Array<T>::~Array( void ) {
	std::cout << "[ ARRAY ] Destructor called" << std::endl;
	delete [] this->_array;
	return ;
}

template <typename T>
Array<T>::Array( const Array &copy ) {
	std::cout << "[ ARRAY ] Copied" << std::endl;
	*this = copy;
	return ;
}

template <typename T>
Array<T>& Array<T>::operator=( const Array &copy ) {
	std::cout << "[ ARRAY ] Assignement operator called" << std::endl;
	this->_size = copy._size;
	this->_array = new T[this->_size];
	for(size_t i = 0; i < this->_size; i++)
		this->_array[i] = copy._array[i];
	return *this;
}

template <typename T>
size_t	Array<T>::getSize( void ) const {
	return (this->_size);
}

template <typename T>
T &Array<T>::operator[](unsigned int i) const {
    if (i >= this->_size)
        throw Array<T>::OutOfBounds();
    return this->_array[i];
}

template <typename T>
const char *Array<T>::OutOfBounds::what(void) const throw()
{
	return ("Out of bounds");
}