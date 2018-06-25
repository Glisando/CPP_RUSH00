/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StarShip.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 16:09:00 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 16:09:05 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"

StarShip::StarShip() : Unit() {

	this->_x = 0;
	this->_y = 20;
}

StarShip::StarShip(StarShip const &ref) {

	*this = ref;
}

StarShip::~StarShip() {

}

StarShip &StarShip::operator=(StarShip const &ref) {

	this->_x = ref.getX();
	this->_y = ref.getY();
	
	return *this;
}

void StarShip::drawShip() {

	attron (COLOR_PAIR (2));
	mvaddstr((int)this->_y - 1, (int)this->_x, "  \\");
	mvaddstr((int)this->_y, (int)this->_x, "{{==>");
	mvaddstr((int)this->_y + 1, (int)this->_x, "  /");
	attroff (COLOR_PAIR (1));
}

void StarShip::drawShipUp() {

	if (this->_y < getmaxy(stdscr) - 2)
		this->_y += 1;
	attron (COLOR_PAIR (2));
	mvaddstr((int)this->_y - 1, (int)this->_x, "  \\");
	mvaddstr((int)this->_y, (int)this->_x, "{{==>");
	mvaddstr((int)this->_y + 1, (int)this->_x, "  /");
	attroff (COLOR_PAIR (2));
}

void StarShip::drawShipDown() {

	if (this->_y > 2)
		this->_y -= 1;
	attron (COLOR_PAIR (2));
	mvaddstr((int)this->_y - 1, (int)this->_x, "  \\");
	mvaddstr((int)this->_y, (int)this->_x, "{{==>");
	mvaddstr((int)this->_y + 1, (int)this->_x, "  /");
	attroff (COLOR_PAIR (2));
}

void StarShip::drawShipLeft() {

	if (this->_x > 0)
		this->_x -= 1;
	attron (COLOR_PAIR (2));
	mvaddstr((int)this->_y - 1, (int)this->_x, "  \\");
	mvaddstr((int)this->_y, (int)this->_x, "{{==>");
	mvaddstr((int)this->_y + 1, (int)this->_x, "  /");
	attroff (COLOR_PAIR (2));
}

void StarShip::drawShipRight() {

	if (this->_x + 5 < getmaxx(stdscr))
		this->_x += 1;
	attron (COLOR_PAIR (2));
	mvaddstr((int)this->_y - 1, (int)this->_x, "  \\");
	mvaddstr((int)this->_y, (int)this->_x, "{{==>");
	mvaddstr((int)this->_y + 1, (int)this->_x, "  /");
	attroff (COLOR_PAIR (2));
}