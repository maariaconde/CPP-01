/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mconde-s <mconde-s@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:32:38 by sofernan          #+#    #+#             */
/*   Updated: 2026/07/18 12:49:50 by mconde-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);

public:
	void complain(std::string level);
};

#endif