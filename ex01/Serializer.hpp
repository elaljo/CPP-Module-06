/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:36:03 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/12 21:05:00 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

#include <iostream>

struct Data{
    int value;
};

class Serializer{
    private:
        Serializer();
        Serializer(const Serializer &rhs);
        Serializer& operator==(const Serializer& rhs);
        ~Serializer();
    public:
        static  uintptr_t serialize(Data* ptr);
        static  Data* deserialize(uintptr_t raw);
};
#endif