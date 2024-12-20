/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:35:52 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/12 21:04:37 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){
    std::cout << "Default Constructor Called" << std::endl;
}
Serializer::Serializer(const Serializer& rhs){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = rhs;
}
Serializer& Serializer::operator==(const Serializer& rhs){
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &rhs){
        
    }
    return *this;
}
Serializer::~Serializer(){
    std::cout << "Destructor Called" << std::endl;
}

uintptr_t Serializer::serialize(Data* ptr){
    return(reinterpret_cast<uintptr_t>(ptr));
}
Data* Serializer::deserialize(uintptr_t raw){
    return (reinterpret_cast<Data*>(raw));
}
