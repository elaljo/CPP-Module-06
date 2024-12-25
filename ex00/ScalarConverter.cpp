/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 09:55:08 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/25 17:36:32 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){
    std::cout << "Default Constructor Called" << std::endl;
}
ScalarConverter::ScalarConverter(const ScalarConverter &rhs){
    std::cout << "Copy Constructor Called" << std::endl;
    *this = rhs;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& rhs){
    std::cout << "Copy Assignment Operator Called" << std::endl;
    if (this != &rhs){
    }
    return (*this);
}
ScalarConverter::~ScalarConverter(){
    std::cout << "Destructor Called" << std::endl;
}

const std::string type_char = "Char";
const std::string type_int = "Integer";
const std::string type_double = "Double";
const std::string type_infini = "Infini";
const std::string type_notanum = "nan";

int check_pseudo(std::string &str){
    std::string s1[4] = {"-inff", "+inff", "-inf" , "+inf"};
    for(int i  = 0; i < 4; i++){
        if (str == s1[i])
            return 1;
    }
    std::string s2[2] = {"nan", "nanf"};
    for(int i = 0; i < 2; i++){
        if (str == s2[i])
            return 2;
    }
    return 0;
}

std::string detect_type(std::string &str){
    if (check_pseudo(str) == 1)
        return type_infini;
    else if (check_pseudo(str) == 2)
        return type_notanum;
    for (int i = 0; i < str[i]; i++)
        if (str[i] == '.')
          return type_double;
    if (((str[0] > 32 && str[0] < 48) || (str[0] > 57 && str[0] < 127)) && str[1] == '\0')
        return type_char;
    else
        return type_int;
    return NULL;
}

void    cast_double(double nb){
    if (nb > 32 && nb < 127)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(nb) << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    std::cout << "double: " << nb << std::endl;
}
void    cast_char(char c){
    if (c > 32 && c < 127)
        std::cout << "char: '" << c << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}
void    cast_int(int nb){
    if (nb > 32 && nb < 127)
        std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    std::cout << "int: " << nb << std::endl;
    std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}
void    print_infini(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: inff" << std::endl;
    std::cout << "double: inf" << std::endl;
}
void    print_notanum(){
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;
}

void    ScalarConverter::convert(std::string str){
    if (detect_type(str) == type_infini)
        print_infini();
    else if (detect_type(str) == type_notanum)
        print_notanum();
    else if (detect_type(str) == type_double)
        cast_double(std::stod(str));
    else if (detect_type(str) == type_char)
        cast_char(str[0]);
    else
        cast_int(std::stoi(str));
}