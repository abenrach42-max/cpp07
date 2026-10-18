/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:48:33 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/17 17:48:33 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    try
    {
        Array<int>   tab(5);
        std::cout << "==========>TEST OUT OF RANGE WITH INT TAB<==========" << std::endl;
        for (int i = 0; i < 8; i++)
            std::cout << tab[i] << std::endl;
        return (0);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        Array<std::string>   tab(5);
        std::cout << "==========>TEST ASSIGNEMENT TAB<==========" << std::endl;
        tab[0] = "bonjour";
        tab[1] = "je";
        tab[2] = "m'appelle";
        tab[3] = "Aymene";
        tab[4] = "enrevoir";
        tab[5] = "lol";
        for (int i = 0; i < 5; i++)                                                      
            std::cout << tab[i] << std::endl;                                            
        return (0);                                                                      
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}