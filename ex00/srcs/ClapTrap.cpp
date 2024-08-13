/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:48:39 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 00:36:20 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include <iostream>

/* CONSTRUCTORS ************************************************************* */

ClapTrap::ClapTrap(void)
: name("unnamed"), hitPts(10), energyPts(10), attackDmg(0)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::ClapTrap(const std::string &str)
: name(str), hitPts(10), energyPts(10), attackDmg(0)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " constructor called" << std::endl;
}

/* DESTRUCTOR *************************************************************** */

ClapTrap::~ClapTrap(void)
{
	std::cout 
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " destructor called" << std::endl;
}

/* ASIGNMENT OPERATOR ******************************************************* */

ClapTrap	&ClapTrap::operator=(const ClapTrap &other)
{
	if (this == &other)
		return (*this);
	this->name = other.name;
	this->hitPts = other.hitPts;
	this->energyPts = other.energyPts;
	this->attackDmg = other.attackDmg;
	return (*this);
}

/* ************************************************************************** */

void	ClapTrap::attack(const std::string &target)
{
	if (!this->hitPts || !this->energyPts)
		return;
	
	std::cout
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " attacks " << target
		<< ", causing " << this->attackDmg << " points of damage!"
		<< std::endl;
	this->energyPts--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
		if (this->hitPts < amount)
			amount = this->hitPts;
		std::cout
			<< "\e[34mClaptrap\e[0m " << this->name
			<< " takes " << amount << " points of damage!"
			<< std::endl;
		this->hitPts -= amount;
		if (!this->hitPts)
			std::cout << "\e[34mClaptrap\e[0m " << this->name << " had died..." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->hitPts || !this->energyPts)
		return;

	std::cout
		<< "\e[34mClaptrap\e[0m " << this->name
		<< " repairs itself, regenerating " << amount << " hit points"
		<< std::endl;
	this->energyPts--;
	this->hitPts += amount;
}
