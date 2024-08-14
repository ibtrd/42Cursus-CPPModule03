/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:41:23 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 18:25:40 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>

# include "ClapTrap.hpp"

# define SCAVTRAP_BASE_NAME "unnamed"
# define SCAVTRAP_BASE_HITPTS 100
# define SCAVTRAP_BASE_ENERGYPTS 50
# define SCAVTRAP_BASE_ATTACKDMG 20

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(const ScavTrap &);
		ScavTrap(const std::string &);

		~ScavTrap(void);

		ScavTrap	&operator=(const ScavTrap &);

		void		attack(const std::string& target);
		void		guardGate(void);
};

#endif /* ******************************************************************* */