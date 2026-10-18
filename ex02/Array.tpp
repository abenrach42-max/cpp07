/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenrach <abenrach@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:50:09 by abenrach          #+#    #+#             */
/*   Updated: 2026/10/17 17:50:09 by abenrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template<typename T>
Array<T>::Array(void)
{
    _tab_elt = NULL;
    _size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->_tab_elt = new T[n]();
    this->_size = n;
}

template<typename T>
T   &Array<T>::operator[](int idx)
{
    if (this->_size <= static_cast<unsigned int>(idx) || this->_size < 0)
        throw std::out_of_range("Error: Index out of range");
    return (this->_tab_elt[idx]);
}

template<typename T>
T   &Array<T>::operator=(T &elt)
{
    this = elt;
}

template<typename T>
Array<T>::~Array(void)
{
    if (this->_size == 0)
        return ;
    else
        delete[] _tab_elt;
}
