/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 09:33:36 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/24 09:36:29 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>
#include <algorithm>
#include <vector>

class noOccurrence : public std::exception {
	public:
		virtual const char* what() const throw() {
			return "No ocurrences found!";
		}
};

template<typename T>
bool    easyfind(T& contain, int num) {
	if (std::find(contain.begin(), contain.end(), num) == contain.end())
		throw noOccurrence();
	return true;
};

template<typename T>
void    print(T& tab){
	std::cout << "[Container of " << (int)tab.size() << " integers]: ";
	for (int i = 0; i < (int)tab.size(); i ++)
		std::cout << "[" << tab[i] << "]";
	std::cout << std::endl;
	return;
}


