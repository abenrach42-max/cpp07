/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 16:34:56 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/17 16:34:56 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int tab_int[5] = {1, 2, 3, 4, 5};
    char tab_char[5] = {'a', 'b', 'c', 'd', 'e'};

    ::iter(tab_int, 5, ::print<int>);
    std::cout << std::endl;
    ::iter(tab_char, 5, ::print<char>);
    std::cout << std::endl;
    return (0);
}