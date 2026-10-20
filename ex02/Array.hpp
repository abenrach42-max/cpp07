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
        Array(const Array<T> &src);
        Array<T>   &operator=(const Array<T> &src);
        T   &operator[](int idx);
        T   &operator=(T &elt);
        ~Array(void);
        unsigned int size(void) const;
};

# include "Array.tpp"

#endif