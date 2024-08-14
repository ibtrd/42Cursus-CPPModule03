/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:48:16 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 14:48:31 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

# define INIT_NAME "unnamed"
# define INIT_HITPTS 10
# define INIT_ENERGYPTS 10
# define INIT_ATTACKDMG 0

class ClapTrap
{
	private:
		std::string		_name;
		unsigned int	_hitPts;
		unsigned int	_energyPts;
		unsigned int	_attackDmg;

	public:
		ClapTrap(void);
		ClapTrap(const ClapTrap &);
		ClapTrap(const std::string &);

		~ClapTrap(void);

		ClapTrap	&operator=(const ClapTrap &);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

#endif /* ******************************************************************* */
