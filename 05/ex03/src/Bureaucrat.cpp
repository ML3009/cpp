/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvautrot <mvautrot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:00:37 by mvautrot          #+#    #+#             */
/*   Updated: 2023/11/15 11:08:26 by mvautrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("random"), _grade(40) { this->exceptFun(); }

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : _name(_name), _grade(_grade) {
	std::cout << *this << std::endl;
	this->exceptFun();
}

Bureaucrat::Bureaucrat(const Bureaucrat& rhs) : _name(rhs.getName()), _grade(rhs.getGrade()) {
	*this = rhs;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	this->_grade = rhs._grade;
	const_cast<std::string&>(this->_name) = rhs._name;
	return *this;
}

Bureaucrat::~Bureaucrat() { }

std::string Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}


void	Bureaucrat::downGrade() {
	try {
		if (this->_grade + 1 > 150)
			throw GradeTooLowException();
	std::cout << "Decrease in "  << this->_name  << " grade " << this->_grade << " to " << this->_grade + 1<< std::endl;
	this->_grade++;
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Caught an exception: " << e.what();
	}
}

void Bureaucrat::upGrade() {
	try {
		if (this->_grade - 1 < 1)
			throw GradeTooHighException();
	std::cout << "Increase in "  << this->_name  << " grade " << this->_grade << " to " << this->_grade - 1 << std::endl;
	this->_grade--;
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Caught an exception: " << e.what();
	}
}

void	Bureaucrat::signForm(AForm& sign){
	try {
		sign.beSigned(*this);
		std::cout << this->_name << " signed " << sign.getName() << std::endl << std::endl;
	}	catch (const AForm::GradeTooHighException& e) {
			std::cerr << this->_name << " couldn't sign " << sign.getName() << " because " << e.what();
	}	catch (const AForm::GradeTooLowException& e) {
			std::cerr << this->_name << " couldn't sign " << sign.getName() << " because " << e.what();
	}	catch(...) {
			std::cerr << "Unknow error" << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const& form){
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl << std::endl;
	} catch (const AForm::GradeTooHighException& e){
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what();
	} catch (const AForm::GradeTooLowException& e){
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what();
	} catch (const AForm::SignExecException& e){
		std::cerr << this->_name << " couldn't execute " << form.getName() << " because " << e.what();
	} catch (const AForm::FileError& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(...) {
		std::cerr << "Unknow error" << std::endl;
	}
}

void	Bureaucrat::exceptFun(){
	try {
		if (this->_grade < 1)
			throw GradeTooHighException();
		if (this->_grade > 150)
			throw GradeTooLowException();
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "Caught an exception: " << e.what();
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "Caught an exception : " << e.what();
	} catch(...) {
		std::cerr << "Unknow error" << std::endl;
	}
	return ;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade is too high!\n\n";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade is too low!\n\n";
}

std::ostream& operator<<(std::ostream& o, const Bureaucrat& rhs) {

	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}






