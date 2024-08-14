/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:41:42 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 21:49:07 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

/* CONSTRUCTORS ************************************************************* */

FragTrap::FragTrap(void)
{
	_hitPts = FRAGTRAP_BASE_HITPTS;
	_energyPts = FRAGTRAP_BASE_ENERGYPTS;
	_attackDmg = FRAGTRAP_BASE_ATTACKDMG;

	std::cout 
		<< "\e[33mFragTrap\e[0m " << this->_name
		<< " default constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other)
{
	*this = other;

	std::cout 
		<< "\e[33mFragTrap\e[0m " << this->_name
		<< " copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &str)
{
	_name = str;
	_hitPts = FRAGTRAP_BASE_HITPTS;
	_energyPts = FRAGTRAP_BASE_ENERGYPTS;
	_attackDmg = FRAGTRAP_BASE_ATTACKDMG;

	std::cout 
		<< "\e[33mFragTrap\e[0m " << this->_name
		<< " constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

FragTrap::~FragTrap(void)
{
	std::cout 
		<< "\e[33mFragTrap\e[0m " << this->_name
		<< " destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

FragTrap	&FragTrap::operator=(const FragTrap &other)
{
	if (this == &other)
		return (*this);
	this->_name = other._name;
	this->_hitPts = other._hitPts;
	this->_energyPts = other._energyPts;
	this->_attackDmg = other._attackDmg;
	return (*this);
}

/* ************************************************************************** */

void	FragTrap::highFivesGuys(void)
{
	if (!this->_hitPts)
		return;

	std::cout << "\e[33mFragTrap\e[0m " << this->_name << " 🙋" << std::endl;
}
