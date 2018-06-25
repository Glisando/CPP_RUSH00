/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:12:45 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/24 14:12:46 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"

Bullet::Bullet() : Unit() {

	this->_x = 0;
	this->_y = 20;
	this->_speed = 1;
	this->_fired = 0;
}

Bullet::Bullet(float x, float y) : Unit() {

	this->_x = x + 6;
	this->_y = y;
	this->_speed = 1;
	this->_fired = 0;
}

Bullet::Bullet(Bullet const &ref) {

	*this = ref;
}

Bullet::~Bullet() {

}

Bullet &Bullet::operator=(Bullet const &ref) {

	this->_x = ref.getX();
	this->_y = ref.getY();
	this->_speed = ref.getSpeed();
	
	return *this;
}

void Bullet::drawBullet() {

	attron (COLOR_PAIR (3));
	mvaddch(this->_y, this->_x, '*');
	attroff (COLOR_PAIR (3));
}
void Bullet::moveBullet() {

	if (this->_x >= getmaxx(stdscr))
		this->_fired = 0;
	else
		this->_x += this->_speed;
}

int Bullet::getFired() const {

	return (this->_fired);
}

void Bullet::setFired(int fired) {

	this->_fired = fired;
}