/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:25:55 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/16 11:45:19 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>


class Base {
	public:
		virtual ~Base();
};

class A : public Base {

};

class B : public Base {

};

class C : public Base {

};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
