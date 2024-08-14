/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:41:42 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 21:12:59 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ScavTrap.hpp"

/* CONSTRUCTORS ************************************************************* */

ScavTrap::ScavTrap(void)
{
	_hitPts = SCAVTRAP_BASE_HITPTS;
	_energyPts = SCAVTRAP_BASE_ENERGYPTS;
	_attackDmg = SCAVTRAP_BASE_ATTACKDMG;

	std::cout << "\e[33mScavTrap\e[0m default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;

	std::cout 
		<< "\e[33mScavTrap\e[0m " << this->_name
		<< " copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &str)
{
	_name = str;
	_hitPts = SCAVTRAP_BASE_HITPTS;
	_energyPts = SCAVTRAP_BASE_ENERGYPTS;
	_attackDmg = SCAVTRAP_BASE_ATTACKDMG;

	std::cout 
		<< "\e[33mScavTrap\e[0m " << this->_name
		<< " constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

ScavTrap::~ScavTrap(void)
{
	std::cout 
		<< "\e[33mScavTrap\e[0m " << this->_name
		<< " destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
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

void	ScavTrap::attack(const std::string &target)
{
	if (!this->_hitPts || !this->_energyPts)
		return;
	
	std::cout
		<< "\e[33mScavTrap\e[0m " << this->_name
		<< " attacks " << target
		<< ", causing " << this->_attackDmg << " points of damage!"
		<< std::endl;
	this->_energyPts--;
}

void	ScavTrap::guardGate(void)
{
	if (!this->_hitPts)
		return;
	
	std::cout 
		<< "\e[33mScavTrap\e[0m " << this->_name
		<< " has entered gatekeeper mode" << std::endl;
}
