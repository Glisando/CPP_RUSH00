/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Menu.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekruhliu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 11:51:22 by ekruhliu          #+#    #+#             */
/*   Updated: 2018/06/24 11:51:22 by ekruhliu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MENU_CLASS_CPP
# define MENU_CLASS_CPP

class Menu {

	public:
		Menu();
		Menu(Menu const &ref);
		~Menu();

		Menu &operator=(Menu const &ref);

		int drawMenu();
		int getI() const;	
		int choseFPS();
		int getFPS() const;
		void setFPS(int fps);
		void gameOver();
	private:
		int i;
		int fps;
};

#endif
