/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:46:29 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 12:05:24 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Default constructor
ScavTrap::ScavTrap() : ClapTrap()
{
	std::cout << "\033[32mScavTrap-Default constructor got called. Object name is: \033[0m" << _name << std::endl;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
}

// Named constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "\033[32mScavTrap-Named constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Copy constructor
ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
	std::cout << "\033[32mScavTrap " << _name << " copied.\n\033[0m" << std::endl;
}

// Copy assignment operator
ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	std::cout << "\033[32mScavTrap " << _name << " assigned.\n\033[0m" << std::endl;
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
ScavTrap::~ScavTrap()
{
	std::cout << "\033[31mScavTrap-Destructor for object \033[0m" << _name << "\033[31m got called\033[0m" << std::endl;
}

// Method from ex00
void ScavTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints -= 1;
		if (_hitPoints <= 0)
			std::cout << "\033[31mStop beating " << target << ", he is already dead! Thats cruel...\033[0m" << std::endl;
		std::cout << _name << " loses 1 energy point!" << std::endl;
	}
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
	else if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no hitpoints left" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " has entered in Gate keeper mode." << std::endl;
}
