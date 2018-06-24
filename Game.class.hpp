/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Game.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 10:51:48 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/24 10:51:49 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StarShip.class.hpp"
#include "Unit.class.hpp"
#include "Bullet.class.hpp"
#include "Enemy.class.hpp"
#include <ctime>
#include <sys/time.h>

# define FPS 60
# define SPEED 0.5
# define MAX_SPEED 3
# define NUM_ENEMY 45 

class Game {

	private:
		Enemy Bob[NUM_ENEMY + 1];
		StarShip Cruiser;
		Bullet Bull[13 + 1];
		int _num_bullets;
		int _score;

	public:
		Game();
		Game(Game const &ref);
		~Game();

		Game &operator=(Game const &ref);

		void StartGame();
		void ActionsEnemys();
		int collisions(int x1, int y1, int x2, int y2);
		void hookKey();
		void CreateBullet();
		void moveBullets();
};
