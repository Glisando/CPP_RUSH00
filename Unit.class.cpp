/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Unit.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 18:45:11 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 18:45:12 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Unit.class.hpp"

Unit::Unit() : _speed(0), _x(0), _y(0) {

}

Unit::Unit(Unit const &ref) {

	*this = ref;
}

Unit::~Unit() {

}

Unit &Unit::operator=(Unit const &ref) {

	this->_x = ref.getX();
	this->_y = ref.getY();
	this->_speed = ref.getSpeed();
	
	return *this;
}

float Unit::getX() const {

	return (this->_x);
}

float Unit::getY() const {

	return (this->_y);
}

float Unit::getSpeed() const {

	return (this->_speed);
}

void Unit::setX(float x) {

	this->_x = x;
}

void Unit::setY(float y) {

	this->_y = y;
}