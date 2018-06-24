/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 18:45:06 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 18:45:07 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UNIT_CLASS_HPP
# define UNIT_CLASS_HPP
# include <iostream>
# include <ncurses.h>

class Unit {
	
	protected:
		float _speed;
		float _x;
		float _y;

	public:
		Unit();
		Unit(Unit const &ref);
		~Unit();

		Unit &operator=(Unit const &ref);

		float getX() const;
		float getY() const;
		float getSpeed() const;
	
};

#endif