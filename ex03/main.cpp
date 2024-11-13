/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:44:40 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 15:38:48 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	std::cout << std::endl << "\033[33m##### PROGRAM TESTER #####\033[0m" << std::endl << std::endl;

	DiamondTrap diamondTrap("Marcel");
	diamondTrap.attack("Marcel");

	diamondTrap.whoAmI();
	return 0;
}
