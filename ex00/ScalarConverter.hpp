/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:55:10 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/08 15:42:46 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <climits>
#include <iostream>

class ScalarConverter{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &rhs);
        ScalarConverter& operator=(const ScalarConverter &rhs);
        ~ScalarConverter();
    public:
        static void convert(std::string str);
};
#endif