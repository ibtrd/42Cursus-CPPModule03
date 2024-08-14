/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:41:42 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 14:46:34 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/* CONSTRUCTORS ************************************************************* */

ScavTrap::ScavTrap(void)
{
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	*this = other;
}

ScavTrap::ScavTrap(const std::string &str)
: _name(str)
{

}

/* DESTRUCTOR *************************************************************** */

ScavTrap::~ScavTrap(void)
{
}

/* ASIGNMENT OPERATOR ******************************************************* */

ScavTrap	&ScavTrap::operator=(const ScavTrap &other)
{
	if (this == &other)
		return (*this);
	// Copy instructions
	return (*this);
}

/* ************************************************************************** */