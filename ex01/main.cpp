/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:58:07 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/20 16:02:45 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data data;

    data.value = 12;
    std::cout << "Ptr Adress: "<< &data << std::endl;
    uintptr_t a = Serializer::serialize(&data);
    std::cout << a << std::endl;
    std::cout << Serializer::deserialize(a) << std::endl;
    return 0;
}