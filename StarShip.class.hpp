/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StarShip.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:09:09 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 16:09:11 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STARSHIP_CLASS_HPP
# define STARSHIP_CLASS_HPP
# include "Unit.class.hpp"

class StarShip : public Unit {

	public:
		StarShip();
		StarShip(StarShip const &ref);
		~StarShip();

		StarShip &operator=(StarShip const &ref);

		void drawShip();
		void drawShipUp();
		void drawShipDown();
		void drawShipLeft();
		void drawShipRight();

};

#endif
