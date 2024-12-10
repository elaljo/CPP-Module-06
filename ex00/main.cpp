/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 10:33:21 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/09 18:59:25 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char *argv[])
{
    if (argc == 2){
        try{
            ScalarConverter::convert(argv[1]);
        }
        catch(std::exception &e){
            std::cout << "Exception Caught :" << e.what() << std::endl;
        }
    }
    else
        std::cerr << "Invalid Parms, Please try again!" << std::endl;
    return 0;
}