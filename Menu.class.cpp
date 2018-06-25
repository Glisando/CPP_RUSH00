/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Menu.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 11:51:18 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/06/24 11:51:19 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Menu.class.hpp"
#include "Game.class.hpp"
#include <ncurses.h>

Menu::Menu() {

	i = 0;
	fps = 60;
}

Menu::Menu(Menu const &ref) {

	*this = ref;
}

Menu::~Menu() {

}

Menu &Menu::operator=(Menu const &ref) {

	this->i = ref.getI();
	
	return *this;
}

int Menu::getI() const
{
	return this->i;
}

int	Menu::getFPS() const
{
	return this->fps;
}

void Menu::setFPS(int fps)
{
	this->fps = fps;
}

int Menu::choseFPS()
{
	static int i = 0;
	int key = 0;

	key = getch();
	clear();
	if (i == 0)
	{
		mvaddstr(10, 40, "#######  ########   ######");
		mvaddstr(11, 40, "#        #      #  #      ");
		mvaddstr(12, 40, "#        #      #   ##     ");
		mvaddstr(13, 40, "#####    ########     ##   ");
		mvaddstr(14, 40, "#        #              ##  ");
		mvaddstr(15, 40, "#        #                # ");
		mvaddstr(16, 40, "#        #         #######");
		attron (COLOR_PAIR (1));
		mvaddstr(20, 20, " #####     ####       ");
		mvaddstr(21, 20, "#     #   #    #      ");
		mvaddstr(22, 20, "      #  #      #     ");
		mvaddstr(23, 20, "   ###   #      #     ");
		mvaddstr(24, 20, "      #  #      #     ");
		mvaddstr(25, 20, "#     #   #    #      ");
		mvaddstr(26, 20, " #####     ####       ");
		attroff (COLOR_PAIR (1));
		mvaddstr(20, 40, " ######     ####       ");
		mvaddstr(21, 40, "#      #   #    #      ");
		mvaddstr(22, 40, "#         #      #     ");
		mvaddstr(23, 40, "#######   #      #     ");
		mvaddstr(24, 40, "#      #  #      #     ");
		mvaddstr(25, 40, "#     #    #    #      ");
		mvaddstr(26, 40, " #####      ####       ");
		
		mvaddstr(20, 60, " ######     ####  ");
		mvaddstr(21, 60, "#      #   #    # ");
		mvaddstr(22, 60, "#      #  #      #");
		mvaddstr(23, 60, " #######  #      #");
		mvaddstr(24, 60, "       #  #      #");
		mvaddstr(25, 60, "#     #    #    # ");
		mvaddstr(26, 60, " #####      ####  ");

		mvaddstr(30, 20, "          ######         ###    #####  #   #");
		mvaddstr(31, 20, "  #       #     #       #  #   #       #  #");
		mvaddstr(32, 20, " #        #     #      #   #  #        # #");
		mvaddstr(33, 20, "########  ######      #    #  #        ##");
		mvaddstr(34, 20, " #        #     #    #######  #        # #");
		mvaddstr(35, 20, "  #       #      #  #      #   #       #  #");
		mvaddstr(36, 20, "          #######  #       #    #####  #   #");
		if (key == '\n')
		{
			this->fps = 30;
			return 0;
		}
	}

	if (i == 1)
	{
		mvaddstr(10, 40, "#######  ########   ######");
		mvaddstr(11, 40, "#        #      #  #      ");
		mvaddstr(12, 40, "#        #      #   ##     ");
		mvaddstr(13, 40, "#####    ########     ##   ");
		mvaddstr(14, 40, "#        #              ##  ");
		mvaddstr(15, 40, "#        #                # ");
		mvaddstr(16, 40, "#        #         #######");

		mvaddstr(20, 20, " #####     ####      ");
		mvaddstr(21, 20, "#     #   #    #     ");
		mvaddstr(22, 20, "      #  #      #    ");
		mvaddstr(23, 20, "   ###   #      #    ");
		mvaddstr(24, 20, "      #  #      #    ");
		mvaddstr(25, 20, "#     #   #    #     ");
		mvaddstr(26, 20, " #####     ####      ");
		attron (COLOR_PAIR (1));
		mvaddstr(20, 40, " ######     ####       ");
		mvaddstr(21, 40, "#      #   #    #      ");
		mvaddstr(22, 40, "#         #      #     ");
		mvaddstr(23, 40, "#######   #      #     ");
		mvaddstr(24, 40, "#      #  #      #     ");
		mvaddstr(25, 40, "#     #    #    #      ");
		mvaddstr(26, 40, " #####      ####       ");
		attroff (COLOR_PAIR (1));
		mvaddstr(20, 60, " ######     ####  ");
		mvaddstr(21, 60, "#      #   #    # ");
		mvaddstr(22, 60, "#      #  #      #");
		mvaddstr(23, 60, " #######  #      #");
		mvaddstr(24, 60, "       #  #      #");
		mvaddstr(25, 60, "#     #    #    # ");
		mvaddstr(26, 60, " #####      ####  ");

		mvaddstr(30, 20, "          ######         ###    #####  #   #");
		mvaddstr(31, 20, "  #       #     #       #  #   #       #  #");
		mvaddstr(32, 20, " #        #     #      #   #  #        # #");
		mvaddstr(33, 20, "########  ######      #    #  #        ##");
		mvaddstr(34, 20, " #        #     #    #######  #        # #");
		mvaddstr(35, 20, "  #       #      #  #      #   #       #  #");
		mvaddstr(36, 20, "          #######  #       #    #####  #   #");
		if (key == '\n')
		{
			this->fps = 60;
			return 0;
		}
	}

	if (i == 2)
	{
		mvaddstr(10, 40, "#######  ########   ######");
		mvaddstr(11, 40, "#        #      #  #      ");
		mvaddstr(12, 40, "#        #      #   ##     ");
		mvaddstr(13, 40, "#####    ########     ##   ");
		mvaddstr(14, 40, "#        #              ##  ");
		mvaddstr(15, 40, "#        #                # ");
		mvaddstr(16, 40, "#        #         #######");

		mvaddstr(20, 20, " #####     ####       ");
		mvaddstr(21, 20, "#     #   #    #      ");
		mvaddstr(22, 20, "      #  #      #     ");
		mvaddstr(23, 20, "   ###   #      #     ");
		mvaddstr(24, 20, "      #  #      #     ");
		mvaddstr(25, 20, "#     #   #    #      ");
		mvaddstr(26, 20, " #####     ####       ");
		
		mvaddstr(20, 40, " ######     ####       ");
		mvaddstr(21, 40, "#      #   #    #      ");
		mvaddstr(22, 40, "#         #      #     ");
		mvaddstr(23, 40, "#######   #      #     ");
		mvaddstr(24, 40, "#      #  #      #     ");
		mvaddstr(25, 40, "#     #    #    #      ");
		mvaddstr(26, 40, " #####      ####       ");
		attron (COLOR_PAIR (1));
		mvaddstr(20, 60, " ######     ####  ");
		mvaddstr(21, 60, "#      #   #    # ");
		mvaddstr(22, 60, "#      #  #      #");
		mvaddstr(23, 60, " #######  #      #");
		mvaddstr(24, 60, "       #  #      #");
		mvaddstr(25, 60, "#     #    #    # ");
		mvaddstr(26, 60, " #####      ####  ");
		attroff (COLOR_PAIR (1));
		mvaddstr(30, 20, "          ######         ###    #####  #   #");
		mvaddstr(31, 20, "  #       #     #       #  #   #       #  #");
		mvaddstr(32, 20, " #        #     #      #   #  #        # #");
		mvaddstr(33, 20, "########  ######      #    #  #        ##");
		mvaddstr(34, 20, " #        #     #    #######  #        # #");
		mvaddstr(35, 20, "  #       #      #  #      #   #       #  #");
		mvaddstr(36, 20, "          #######  #       #    #####  #   #");
		if (key == '\n')
		{
			this->fps = 90;
			return 0;
		}
	}

	if (i == 3)
	{
		mvaddstr(10, 40, "#######  ########   ######");
		mvaddstr(11, 40, "#        #      #  #      ");
		mvaddstr(12, 40, "#        #      #   ##     ");
		mvaddstr(13, 40, "#####    ########     ##   ");
		mvaddstr(14, 40, "#        #              ##  ");
		mvaddstr(15, 40, "#        #                # ");
		mvaddstr(16, 40, "#        #         #######");

		mvaddstr(20, 20, " #####     ####       ");
		mvaddstr(21, 20, "#     #   #    #      ");
		mvaddstr(22, 20, "      #  #      #     ");
		mvaddstr(23, 20, "   ###   #      #     ");
		mvaddstr(24, 20, "      #  #      #     ");
		mvaddstr(25, 20, "#     #   #    #      ");
		mvaddstr(26, 20, " #####     ####       ");
		
		mvaddstr(20, 40, " ######     ####       ");
		mvaddstr(21, 40, "#      #   #    #      ");
		mvaddstr(22, 40, "#         #      #     ");
		mvaddstr(23, 40, "#######   #      #     ");
		mvaddstr(24, 40, "#      #  #      #     ");
		mvaddstr(25, 40, "#     #    #    #      ");
		mvaddstr(26, 40, " #####      ####       ");
		
		mvaddstr(20, 60, " ######     ####  ");
		mvaddstr(21, 60, "#      #   #    # ");
		mvaddstr(22, 60, "#      #  #      #");
		mvaddstr(23, 60, " #######  #      #");
		mvaddstr(24, 60, "       #  #      #");
		mvaddstr(25, 60, "#     #    #    # ");
		mvaddstr(26, 60, " #####      ####  ");
		attron (COLOR_PAIR (1));
		mvaddstr(30, 20, "          ######         ###    #####  #   #");
		mvaddstr(31, 20, "  #       #     #       #  #   #       #  #");
		mvaddstr(32, 20, " #        #     #      #   #  #        # #");
		mvaddstr(33, 20, "########  ######      #    #  #        ##");
		mvaddstr(34, 20, " #        #     #    #######  #        # #");
		mvaddstr(35, 20, "  #       #      #  #      #   #       #  #");
		mvaddstr(36, 20, "          #######  #       #    #####  #   #");
		attroff (COLOR_PAIR (1));
		if (key == '\n')
			return 0;
	}
	if (key == 100 && i < 3)
		i++;
	if (key == 97 && i > 0)
		i--;
	return 2;
}

int Menu::drawMenu()
{
	int key = 0;

	key = getch();

	if (this->i == 0)
	{
		attron (COLOR_PAIR (1));
		mvaddstr(20, 20, " ####  #######      ###  ######  #######");
		mvaddstr(21, 20, "#         #        #  #  #    #     #   ");
		mvaddstr(22, 20, " #        #       #   #  #    #     #   ");
		mvaddstr(23, 20, "  #       #      #    #  #####      #   ");
		mvaddstr(24, 20, "   #      #     #######  #  #       #   ");
		mvaddstr(25, 20, "    #     #    #      #  #   #      #   ");
		mvaddstr(26, 20, "####      #   #       #  #    #     #   ");
		attroff (COLOR_PAIR (1));

		mvaddstr(28, 20, " ####  ##### ####### #######  #  ##      #    ##### ");
		mvaddstr(29, 20, "#      #        #       #     #  # #     #   #     #");
		mvaddstr(30, 20, " #     #        #       #     #  #  #    #  #       ");
		mvaddstr(31, 20, "  #    #####    #       #     #  #   #   #  #  #### ");
		mvaddstr(32, 20, "   #   #        #       #     #  #    #  #  #      #");
		mvaddstr(33, 20, "    #  #        #       #     #  #     # #   #    # ");
		mvaddstr(34, 20, "####   #####    #       #     #  #      ##    ####  ");

		mvaddstr(36, 20, "#####  #      #  #  #######");
		mvaddstr(37, 20, "#       #    #   #     #   ");
		mvaddstr(38, 20, "#        #  #    #     #   ");
		mvaddstr(39, 20, "#####     ##     #     #   ");
		mvaddstr(40, 20, "#        #  #    #     #   ");
		mvaddstr(41, 20, "#       #    #   #     #   ");
		mvaddstr(42, 20, "#####  #      #  #     #   ");
		if (key == '\n')
			return 1;
	}
	if (this->i == 1)
	{
		mvaddstr(20, 20, " ####  #######      ###  ######  #######");
		mvaddstr(21, 20, "#         #        #  #  #    #     #   ");
		mvaddstr(22, 20, " #        #       #   #  #    #     #   ");
		mvaddstr(23, 20, "  #       #      #    #  #####      #   ");
		mvaddstr(24, 20, "   #      #     #######  #  #       #   ");
		mvaddstr(25, 20, "    #     #    #      #  #   #      #   ");
		mvaddstr(26, 20, "####      #   #       #  #    #     #   ");
		
		attron (COLOR_PAIR (1));
		mvaddstr(28, 20, " ####  ##### ####### #######  #  ##      #    ##### ");
		mvaddstr(29, 20, "#      #        #       #     #  # #     #   #     #");
		mvaddstr(30, 20, " #     #        #       #     #  #  #    #  #       ");
		mvaddstr(31, 20, "  #    #####    #       #     #  #   #   #  #  #### ");
		mvaddstr(32, 20, "   #   #        #       #     #  #    #  #  #      #");
		mvaddstr(33, 20, "    #  #        #       #     #  #     # #   #    # ");
		mvaddstr(34, 20, "####   #####    #       #     #  #      ##    ####  ");
		attroff (COLOR_PAIR (1));

		mvaddstr(36, 20, "#####  #      #  #  #######");
		mvaddstr(37, 20, "#       #    #   #     #   ");
		mvaddstr(38, 20, "#        #  #    #     #   ");
		mvaddstr(39, 20, "#####     ##     #     #   ");
		mvaddstr(40, 20, "#        #  #    #     #   ");
		mvaddstr(41, 20, "#       #    #   #     #   ");
		mvaddstr(42, 20, "#####  #      #  #     #   ");
		if (key == '\n')
			return 2;
	}
	if (this->i == 2)
	{
		mvaddstr(20, 20, " ####  #######      ###  ######  #######");
		mvaddstr(21, 20, "#         #        #  #  #    #     #   ");
		mvaddstr(22, 20, " #        #       #   #  #    #     #   ");
		mvaddstr(23, 20, "  #       #      #    #  #####      #   ");
		mvaddstr(24, 20, "   #      #     #######  #  #       #   ");
		mvaddstr(25, 20, "    #     #    #      #  #   #      #   ");
		mvaddstr(26, 20, "####      #   #       #  #    #     #   ");

		mvaddstr(28, 20, " ####  ##### ####### #######  #  ##      #    ##### ");
		mvaddstr(29, 20, "#      #        #       #     #  # #     #   #     #");
		mvaddstr(30, 20, " #     #        #       #     #  #  #    #  #       ");
		mvaddstr(31, 20, "  #    #####    #       #     #  #   #   #  #  #### ");
		mvaddstr(32, 20, "   #   #        #       #     #  #    #  #  #      #");
		mvaddstr(33, 20, "    #  #        #       #     #  #     # #   #    # ");
		mvaddstr(34, 20, "####   #####    #       #     #  #      ##    ####  ");

		attron (COLOR_PAIR (1));
		mvaddstr(36, 20, "#####  #      #  #  #######");
		mvaddstr(37, 20, "#       #    #   #     #   ");
		mvaddstr(38, 20, "#        #  #    #     #   ");
		mvaddstr(39, 20, "#####     ##     #     #   ");
		mvaddstr(40, 20, "#        #  #    #     #   ");
		mvaddstr(41, 20, "#       #    #   #     #   ");
		mvaddstr(42, 20, "#####  #      #  #     #   ");
		attroff (COLOR_PAIR (1));
		if (key == '\n')
			return 3;
	}
	if (key == 115 && i < 2)
		this->i++;
	if (key == 119 && i > 0)
		this->i--;
	refresh();
	return 0;
}
