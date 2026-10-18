/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:50:13 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/17 17:50:13 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
 
# include <iostream>
# include <string>
# include <exception>
 

template<typename T>
class   Array
{
    private:
        T   *_tab_elt;
        unsigned int _size;
    public:
        Array(void);
        Array(unsigned int n);
        Array(const Array &src);
        Array   &operator=(const Array &src);
        T   &operator[](int idx);
        T   &operator=(T &elt);
        ~Array(void);
        unsigned int size(void) const {return this->_size; };
};

# include "Array.tpp"

#endif