/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 21:39:55 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "DiamondTrap.hpp"

int main(void)
{
	{
		DiamondTrap	test("mjuffard");

		std::cout << std::endl;

		test.whoAmI();
		test.highFivesGuys();
		test.guardGate();
		test.attack("anfichet");
		test.takeDamage(550);
		
		std::cout << std::endl;
	}
	return (0);
}
