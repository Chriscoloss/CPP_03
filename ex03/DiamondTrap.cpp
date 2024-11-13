/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:31:16 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 17:33:35 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Default constructor
DiamondTrap::DiamondTrap() : ClapTrap("default"), ScavTrap("default"), FragTrap("default")
{
	ScavTrap temp;

	_energyPoints = temp.get_energy_points();
	std::cout << "\033[32mDiamond-Default constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Named constructor
DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	ScavTrap temp;

	_name = name;
	_energyPoints = temp.get_energy_points();

	// Prints for proving inheritance
	// std::cout << _name << std::endl;
	// std::cout << _hitPoints << std::endl;
	// std::cout << _energyPoints << std::endl;
	// std::cout << _attackDamage << std::endl;
	std::cout << "\033[32mDiamond-Default constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Copy constructor
DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(original)
{
	std::cout << "\033[32mDiamondTrap " << _name << " copied.\n\033[0m" << std::endl;
}

// Copy assignment operator
DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	std::cout << "\033[32mDiamondTrap " << _name << " assigned.\n\033[0m" << std::endl;
	if (this != &original)
	{
		_name = original._name;
		_hitPoints = original._hitPoints;
		_energyPoints = original._energyPoints;
		_attackDamage = original._attackDamage;
	}
	return *this;
}

// Destructor
DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[31mDiamondTrap-Destructor for object \033[0m" << _name << "\033[31m got called\033[0m" << std::endl;
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "\033[32mI am " << _name << " and I am a DiamondTrap!\033[0m" << std::endl;
}
