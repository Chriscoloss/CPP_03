/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:44 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 11:26:34 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Default constructor
ClapTrap::ClapTrap() : _name("thealwaysJonny (by default)"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[32mClapTrap-Default constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Named constructor
ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "\033[32mNamed constructor got called. Object name is: \033[0m" << _name << std::endl;
}

// Copyt constructor
ClapTrap::ClapTrap(const ClapTrap& original)
{
	std::cout << "\033[32mCopy constructor called\033[0m" << std::endl;
	_name = original._name;
	_hitPoints = original._hitPoints;
	_energyPoints = original._energyPoints;
	_attackDamage = original._attackDamage;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	std::cout << "\033[32mCopy assignment operator called\033[0m" << std::endl;
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
ClapTrap::~ClapTrap()
{
	std::cout << "\033[31mClapTrap-Destructor for object \033[0m" << _name << "\033[31m got called\033[0m" << std::endl;
}

// Method from ex00
void ClapTrap::attack(const std::string& target)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
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

// Method from ex00
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		_hitPoints -= amount;
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}

// Method from ex00
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0 && (_hitPoints + amount) < 10)
	{
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is repairing his self for " << amount << " points!" << std::endl;
		_energyPoints -= 1;
		std::cout << _name << " loses 1 energy point!" << std::endl;
	}
	else if (_hitPoints <= 0)
		std::cout << "no hitPoints left" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
	std::cout << std::endl;
}
