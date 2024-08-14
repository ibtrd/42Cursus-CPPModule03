/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:54:05 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 20:57:23 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <string>

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

# define DIAMONDTRAP_BASE_NAME "unnamed"

class DiamondTrap : public ScavTrap , public FragTrap
{
	private:
		std::string	_name;

	public:
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &);
		DiamondTrap(const std::string &);

		~DiamondTrap(void);

		DiamondTrap	&operator=(const DiamondTrap &);
		void		whoAmI(void);
};

#endif /* ******************************************************************* */
