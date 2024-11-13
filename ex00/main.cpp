/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:44:40 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 10:43:02 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	std::cout << std::endl << "\033[33m##### PROGRAM TESTER #####\033[0m" << std::endl << std::endl;

	ClapTrap clapTrap1("George");
	ClapTrap clapTrap2;


	std::cout << std::endl;

	clapTrap1.attack("Leo");
	clapTrap1.takeDamage(5);
	clapTrap1.beRepaired(3);
	clapTrap1.takeDamage(5);
	clapTrap1.takeDamage(5);

	return 0;
}
