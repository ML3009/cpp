/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 10:57:07 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/25 10:58:22 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void) {

    std::cout << std::endl;
    std::cout << "[ Harl's construction ]" << std::endl;
    std::cout << std::endl;
}

Harl::~Harl(void) {

    std::cout <<  "[ Harl's destruction ]" << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level) {

    std::string strComp[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrString[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    for (int i = 0; i < 4 ; i++) {
        if (level == strComp[i]) {
            (this->*ptrString[i])();
            return;
        }
    }
    std::cout << std::endl;
}

void Harl::debug(void) {

    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. "
              << "I really do !" << std::endl;
    std::cout << std::endl;

}

void Harl::info(void) {

    std::cout << "[ INFO ]" << std::endl;
    std::cout << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger ! "
              << "If you did, I wouldn’t be asking for more!" << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void) {

    std::cout << "[ WARNING ]" << std::endl;
    std::cout << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working here since last month."
              << std::endl;
    std::cout << std::endl;
}

void Harl::error(void) {

    std::cout << "[ ERROR ]" << std::endl;
    std::cout << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

