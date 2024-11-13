/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:44:40 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 12:02:57 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl << "\033[33m##### PROGRAM TESTER #####\033[0m" << std::endl << std::endl;

	ScavTrap scavTrap;
	ScavTrap scavTrap2("Marcel");

	scavTrap.attack("Luis");
	scavTrap.guardGate();

	return 0;
}
