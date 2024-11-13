/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:44:40 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 12:17:09 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	std::cout << std::endl << "\033[33m##### PROGRAM TESTER #####\033[0m" << std::endl << std::endl;

	FragTrap fragTrap;
	FragTrap fragTrap2("Marcel");

	fragTrap.attack("Luis");
	fragTrap.highFivesGuys();

	return 0;
}
