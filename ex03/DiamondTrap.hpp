/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chorst <chorst@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:31:23 by chorst            #+#    #+#             */
/*   Updated: 2024/10/30 15:46:36 by chorst           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMOND_HPP
# define DIAMOND_HPP

# include <iostream>
# include <string>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
				std::string _name;
	public:
				DiamondTrap();
				DiamondTrap(std::string name);
				DiamondTrap(const DiamondTrap& original);
				DiamondTrap& operator=(const DiamondTrap& original);
				~DiamondTrap();

				// Method
				void whoAmI(void);
};

#endif
