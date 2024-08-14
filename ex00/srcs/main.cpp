/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 17:07:54 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ClapTrap.hpp"

int main(void)
{
	{
		ClapTrap	test("mjuffard");

		std::cout << std::endl;

		test.attack("anfichet");
		test.takeDamage(5);
		test.beRepaired(2);
		test.takeDamage(5);
		test.attack("anfichet");
		test.attack("anfichet");
		test.takeDamage(5);
		
		//DIES
		test.beRepaired(42);
		test.attack("kchillon");
		
		std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;

	{
		ClapTrap	test("lrio");

		std::cout << std::endl;

		for (int i = 0; i < 20; i++)
		{
			test.attack("anfichet");
			test.beRepaired(2);
		}
		
		std::cout << std::endl;
	}

	return (0);
}
