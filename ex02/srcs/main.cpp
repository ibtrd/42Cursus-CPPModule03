/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibertran <ibertran@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 23:02:21 by ibertran          #+#    #+#             */
/*   Updated: 2024/08/14 17:50:57 by ibertran         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "FragTrap.hpp"

int main(void)
{
	{
		FragTrap	test("mjuffard");

		std::cout << std::endl;

		test.attack("anfichet");
		test.takeDamage(5);
		test.beRepaired(2);
		test.takeDamage(5);
		test.attack("anfichet");
		test.attack("anfichet");
		test.takeDamage(5);
		
		//SURVIVES
		test.beRepaired(42);
		test.attack("kchillon");
		test.highFivesGuys();
		
		std::cout << std::endl;
	}
	return (0);
}
