/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:48:39 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 16:49:44 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

/* CONSTRUCTORS ************************************************************* */

ClapTrap::ClapTrap(void) :
	_name(CLAPTRAP_BASE_NAME),
	_hitPts(CLAPTRAP_BASE_HITPTS),
	_energyPts(CLAPTRAP_BASE_ENERGYPTS),
	_attackDmg(CLAPTRAP_BASE_ATTACKDMG)
{
	std::cout << "\e[34mClaptrap\e[0m default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->_name
		<< " copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(const std::string &str) :
	_name(str),
	_hitPts(CLAPTRAP_BASE_HITPTS),
	_energyPts(CLAPTRAP_BASE_ENERGYPTS),
	_attackDmg(CLAPTRAP_BASE_ATTACKDMG)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->_name
		<< " constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

ClapTrap::~ClapTrap(void)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->_name
		<< " destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
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

void	ClapTrap::attack(const std::string &target)
{
	if (!this->_hitPts || !this->_energyPts)
		return;
	
	std::cout
		<< "\e[34mClaptrap\e[0m " << this->_name
		<< " attacks " << target
		<< ", causing " << this->_attackDmg << " points of damage!"
		<< std::endl;
	this->_energyPts--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		if (this->_hitPts < amount)
			amount = this->_hitPts;
		std::cout
			<< "\e[34mClaptrap\e[0m " << this->_name
			<< " takes " << amount << " points of damage!"
			<< std::endl;
		this->_hitPts -= amount;
		if (!this->_hitPts)
			std::cout << "\e[34mClaptrap\e[0m " << this->_name << " had died..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->_hitPts || !this->_energyPts)
		return;

	std::cout
		<< "\e[34mClaptrap\e[0m " << this->_name
		<< " repairs itself, regenerating " << amount << " hit points"
		<< std::endl;
	this->_energyPts--;
	this->_hitPts += amount;
}
