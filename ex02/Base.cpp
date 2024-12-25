/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelalj <moelalj@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:11:01 by moelalj           #+#    #+#             */
/*   Updated: 2024/12/25 17:21:00 by moelalj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){
    std::cout << "Base Destructor called" << std::endl;
}

Base*   Base::generate(void){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(0, 2);

    int choice = distrib(gen);

    if (choice == 0)
        return new A();
    else if (choice == 1)
        return new B();
    else
        return new C();
}

void    Base::identify(Base *p){
    if (dynamic_cast<A*>(p))
        std::cout << "The type of the object pointed to by p is: 'A'" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "The type of the object pointed to by p is: 'B'" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "The type of the object pointed to by p is: 'C'" << std::endl;
}

void    Base::identify(Base &p){
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "The type of the object pointed to by p is: 'A'" << std::endl;
        (void)a;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "The type of the object pointed to by p is: 'B'" << std::endl;
        (void)b;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "The type of the object pointed to by p is: 'C'" << std::endl;
        (void)c;
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
