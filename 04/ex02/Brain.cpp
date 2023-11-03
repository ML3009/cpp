/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:30:55 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/03 17:30:59 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {

    std::cout << "Brain's constructor" << std::endl;
}

Brain::Brain(const Brain& rhs) {

    *this = rhs;
}

Brain& Brain::operator=(const Brain& rhs) {

    for (int i = 0; i < 100 ; i++)
        this->_ideas[i] = rhs._ideas[i];
    return *this;
}

Brain::~Brain(void) {

    std::cout << "Brain's destructor" << std::endl;
}

void    Brain::setIdea(int posidea, std::string idea) {

    this->_ideas[posidea] = idea;
}

std::string Brain::getIdea(int posidea) const {

    return this->_ideas[posidea];
}
