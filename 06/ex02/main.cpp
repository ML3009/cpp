/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 11:26:01 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/16 11:46:08 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main(){

	Base* ptr = generate();
	Base& ref = *ptr;

	std::cout << "[ptr]" << std::endl;
	identify(ptr);
	std::cout << "[ref]" << std::endl;
	identify(ref);
	delete ptr;
	return 0;
}
