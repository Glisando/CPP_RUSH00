/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:56:47 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 17:56:48 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <ncurses.h>
#include "Game.class.hpp"

Enemy::Enemy() : Unit() {

	int i = 0;

	srand(clock());
	i = rand() % 30;
	if (i % 2 == 0)
		this->_x = getmaxx(stdscr) - 50 + i;
	else
		this->_x = getmaxx(stdscr) - 50 - i;
	i = rand() % 30;
	if (i % 2 == 0)
		this->_y = 30 + i;
	else
		this->_y = 30 - i;
	this->_speed = SPEED;
}

Enemy::Enemy(Enemy const &ref) {

	*this = ref;
}

Enemy::~Enemy() {

}

Enemy &Enemy::operator=(Enemy const &ref) {

	this->_x = ref.getX();
	this->_y = ref.getY();
	this->_speed = ref.getSpeed();
	
	return *this;
}

void Enemy::drawEnemy() {

	attron (COLOR_PAIR (1));
	mvaddch((int)this->_y, (int)this->_x, '<');
	mvaddch((int)this->_y, (int)this->_x + 1, '}');
	mvaddch((int)this->_y, (int)this->_x + 2, '}');
	attroff (COLOR_PAIR (1));
}

void Enemy::moveEnemy() {

	if (this->_x < 0) {
		
		this->setX(1);
		if (this->_speed < MAX_SPEED)
			this->_speed += 0.2;
	}
	else
		this->_x -= this->_speed;
}

void Enemy::setX(float x) {
	
	int i = 0;

	x = 0;
	i = rand() % getmaxx(stdscr);
	this->_x = getmaxx(stdscr) + i;
}