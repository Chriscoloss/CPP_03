/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:08:54 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 12:11:36 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

// Default constructor
FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "\033[32mFragTrap-Default constructor got called. Object name is: \033[0m" << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

// Named constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\033[32mFragTrap-Named constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Copy constructor
FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
	std::cout << "\033[32mFragTrap " << _name << " copied.\n\033[0m" << std::endl;
}

// Copy assignment operator
FragTrap& FragTrap::operator=(const FragTrap& original)
{
	std::cout << "\033[32mFragTrap " << _name << " assigned.\n\033[0m" << std::endl;
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
FragTrap::~FragTrap()
{
	std::cout << "\033[31mFragTrap-Destructor for object \033[0m" << _name << "\033[31m got called\033[0m" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "\033[33mFragTrap " << _name << " is asking for a high five!\033[0m" << std::endl;
}
