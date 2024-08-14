/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:37 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 21:45:49 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

/* CONSTRUCTORS ************************************************************* */

DiamondTrap::DiamondTrap(void)
: _name(DIAMONDTRAP_BASE_NAME)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;
	
	std::cout 
		<< "\e[35mDiamondTrap\e[0m " << this->_name
		<< " default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	*this = other;
}

DiamondTrap::DiamondTrap(const std::string &str)
: _name(str)
{
	ClapTrap::_name = this->_name + "_clap_name";
	this->_hitPts = FragTrap::_hitPts;
	this->_energyPts = ScavTrap::_energyPts;
	this->_attackDmg = FragTrap::_attackDmg;

	std::cout 
		<< "\e[35mDiamondTrap\e[0m " << this->_name
		<< " constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

DiamondTrap::~DiamondTrap(void)
{
	std::cout 
		<< "\e[35mDiamondTrap\e[0m " << this->_name
		<< " destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
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

void		DiamondTrap::whoAmI(void)
{
	std::cout
		<< "\e[35mDiamondTrap\e[0m " << this->_name
		<< " ClapTrap name is " << ClapTrap::_name
		<< std::endl;
}
