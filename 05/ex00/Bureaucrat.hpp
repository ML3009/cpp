/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:35 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/07 18:12:25 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat {

	public:
		Bureaucrat();
		Bureaucrat(const std::string _name, int _grade);
		Bureaucrat(const Bureaucrat& rhs);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat();

		class GradeTooHighException : public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				virtual const char* what() const throw();
		};

		std::string getName() const;
		int 		getGrade() const;
		void		upGrade();
		void		downGrade();
		void		exceptFun();

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream & operator<<(std::ostream& o, const Bureaucrat& rhs);






#endif
