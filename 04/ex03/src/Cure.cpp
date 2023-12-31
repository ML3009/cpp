/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:05:05 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/06 13:05:55 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

Cure::Cure() : AMateria() {

	this->type = "cure";
	std::cout << "Cure's constructor" << std::endl;
}

Cure::Cure(std::string const& type) : AMateria(type) {

	this->type = type;
	std::cout << "Cure's constructor" << std::endl;
}

Cure::Cure(const Cure& rhs) : AMateria(rhs.getType()) {

	std::cout << "Cure's copy" << std::endl;
	*this = rhs;
}

Cure& Cure::operator=(const Cure& rhs) {

	this->type = rhs.type;
	return *this;
}

Cure::~Cure() {

	std::cout << "Cure's destructor" << std::endl;
}

Cure* Cure::clone() const {

	return new Cure(*this);
}

