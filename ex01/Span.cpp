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
        Span(void);
        Span(unsigned int n);
        Span(Span const &src);
        ~Span(void);

        Span &operator=(Span const &src);

        std::vector<unsigned int> storage;
        void add_number();
        void shortest_span(),
        void longest_span();
        
}

#endif
