/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simao <simao@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 21:06:56 by simao             #+#    #+#             */
/*   Updated: 2023/12/14 21:09:44 by simao            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>

template <typename T>
class Span
{
    public:
        std::vector<unsigned int> storage;
        void add_number();
        void shortest_span(),
        void longest_span();
        
}

#endif