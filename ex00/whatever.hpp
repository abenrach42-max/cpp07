/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:11:41 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/16 19:11:41 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <string>
# include <iostream>
# include <exception>

template<typename T>
void    swap(T &a, T &b)
{
    T   tmp = a;
    a = b;
    b = tmp;
}

template<typename T>
T   min(const T &a, const T &b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template<typename T>
T   max(const T &a, const T &b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif