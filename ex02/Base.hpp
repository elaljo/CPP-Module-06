/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:06:48 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/25 17:03:50 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <random>
#include <exception>

class Base{
    public:
        virtual ~Base();
        static Base    *generate(void);
        static void    identify(Base* p);
        static void    identify(Base& p);
};

class A : public Base{
};
class B : public Base{
};
class C : public Base{
};

#endif