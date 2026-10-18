/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:35:22 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/17 16:35:22 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>
# include <exception>

template<typename F, typename T>
void    iter(T  *tab, const int lenght, F fun)
{
    for (int i = 0; i < lenght; i++)
        fun(tab[i]);
    return ;
}

//exemple de fonction

template<typename T>
void    print(const T &c)
{
    std::cout << c;
}

#endif