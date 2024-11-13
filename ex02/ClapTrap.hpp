/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 10:13:53 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 10:54:41 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
				std::string _name;
				int _hitPoints;
				int _energyPoints;
				int _attackDamage;
	public:
				// Orthodox Canonical Form
				ClapTrap();
				ClapTrap(const ClapTrap& original);
				ClapTrap& operator=(const ClapTrap& original);
				~ClapTrap();
				// Named constructor
				ClapTrap(std::string name);

				// Methods
				void attack(const std::string& target);
				void takeDamage(unsigned int amount);
				void beRepaired(unsigned int amount);
};

#endif
