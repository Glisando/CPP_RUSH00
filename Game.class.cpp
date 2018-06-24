/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:53:23 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/24 10:53:25 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Game.class.hpp"

Game::Game() {

}

Game::Game(Game const &ref) {

	*this = ref;
}

Game::~Game() {

}

Game &Game::operator=(Game const &ref) {
	
	for (int i = 0; i < NUM_ENEMY; i++) {

		this->Bob[i] = ref.Bob[i];
	}
	return *this;
}

void Game::StartGame() {

	clock_t t1;
	clock_t t2;

	initscr();
	noecho();
	curs_set(0);
	keypad(stdscr, true);
	start_color ();
	init_pair (1, COLOR_RED, COLOR_BLACK);
	timeout(1);
	t2 = 0;
	while (1)
	{
		t1 = clock() / (CLOCKS_PER_SEC / FPS);
		if (t1 > t2) {
			
			clear();
			for (int i = 0; i < getmaxx(stdscr); i++)
				mvaddch(((getmaxy(stdscr) / 3) * 2) + 10, i, '-');
			for (int i = 0; i < getmaxx(stdscr); i++)
					mvaddch((getmaxy(stdscr) / 3) - 10, i, '-');
			Game::ActionsEnemys();
			this->Cruiser.drawShip();
			Game::hookKey();
			t2 = clock() / (CLOCKS_PER_SEC / FPS);
			refresh();	
		}
	}
	endwin();
}

void Game::ActionsEnemys() {

	for (int i = 0; i < NUM_ENEMY; i++) {

		for (int j = 0; j < 5; j++) {
			if (collisions(this->Cruiser.getX() + j, this->Cruiser.getY(), Bob[i].getX(), Bob[i].getY())) {
				
				refresh();
				system("reset");
				exit(1);
			}
		}
		Bob[i].drawEnemy();

	}
	for (int i = 0; i < NUM_ENEMY; i++) {

		Bob[i].moveEnemy();
	}
}

int Game::collisions(int x1, int y1, int x2, int y2) {

	if (x1 == x2 && y1 == y2)
		return (1);
	return (0);
}

void Game::CreateBullet() {

	int i = -1;

	while (++i < NUM_BULLETS) {

		if (!Bull[i].getFired) {
			
			Bull[i].drawBullet();
			Bull[i].moveBullet();
		}
	}
}

void Game::hookKey() {

	int key = 0;

	key = getch();
	if (key == 113)
	{
		refresh();
		system("reset");
		exit(1) ;
	}
	if (key == 115)
		Cruiser.drawShipUp();
	if (key == 119)
		Cruiser.drawShipDown();
	if (key == 97)
		Cruiser.drawShipLeft();
	if (key == 100)
		Cruiser.drawShipRight();
	if (key == 32) {
		
		// Game::CreateBullet();
	}
}
