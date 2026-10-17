/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/16 19:11:01 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/16 19:11:01 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int main(void)
{
    // int a = 4;
    // int b = 2;
    // float c = 4.2;
    // float d = 2.4;
    // std::cout << "a = " << a << "\nb = " << b << "\n" << std::endl;
    // swap<int>(a, b);
    // std::cout << "a = " << a << "\nb = " << b << "\n" << std::endl;
    //test avec un autre type
    // std::cout << "c = " << c << "\nd = " << d << "\n" << std::endl;
    // swap<float>(c, d);
    // std::cout << "c = " << c << "\nd = " << d << "\n" << std::endl;
    // test du sujet
    int a = 2;
    int b = 3;
    ::swap( a, b );
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return (0);
}
