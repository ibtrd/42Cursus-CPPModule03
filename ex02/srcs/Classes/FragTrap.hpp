/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:41:23 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 17:36:22 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>

# include "ClapTrap.hpp"

# define FRAGTRAP_BASE_NAME "unnamed"
# define FRAGTRAP_BASE_HITPTS 100
# define FRAGTRAP_BASE_ENERGYPTS 100
# define FRAGTRAP_BASE_ATTACKDMG 30

class FragTrap : public ClapTrap
{
	private:

	public:
		FragTrap(void);
		FragTrap(const FragTrap &);
		FragTrap(const std::string &);

		~FragTrap(void);

		FragTrap	&operator=(const FragTrap &);

		void		attack(const std::string& target);
		void		highFivesGuys(void);
};

#endif /* ******************************************************************* */