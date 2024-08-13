/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:48:16 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 00:00:39 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPts;
		unsigned int	energyPts;
		unsigned int	attackDmg;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &);
		ClapTrap(const std::string &);

		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &);

		void		displayName(void);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif /* ******************************************************************* */
