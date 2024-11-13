/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 10:46:39 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 11:28:28 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
				ScavTrap();
				ScavTrap(const ScavTrap& original);
				ScavTrap& operator=(const ScavTrap& original);
				~ScavTrap();
				ScavTrap(std::string name);

				void attack(const std::string& target);
				void guardGate();
};

#endif
