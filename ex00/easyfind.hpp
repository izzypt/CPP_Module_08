/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:24:53 by simao             #+#    #+#             */
/*   Updated: 2023/12/14 20:59:51 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
int		easyfind(T &container, int value)
{
    /* Returns an iterator to the first element in the range [first,last) that compares equal to val. 
    If no such element is found, the function returns last.*/
    int it = std::find(container.begin(), container.end(), value);
    
    if (it != container.end())
    {
        std::cout << "Value found in container: " << it << std::endl;
    }
    else
		throw std::runtime_error("Error: Element not found");
}

#endif