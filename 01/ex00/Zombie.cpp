/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:40:52 by mvautrot          #+#    #+#             */
/*   Updated: 2023/10/16 10:06:16 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {

}

Zombie::~Zombie(void) {

    std::cout << "Destructed " << this->_name << std::endl;
}

void Zombie::setName(std::string name) {

    this->_name = name;
}

void    Zombie::announce(void) {

    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}