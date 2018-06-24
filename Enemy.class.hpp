/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:56:38 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/23 17:56:43 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_CPP
# define ENEMY_CLASS_CPP
# include "Unit.class.hpp"

class Enemy : public Unit {

	public:
		Enemy();
		Enemy(Enemy const &ref);
		~Enemy();

		Enemy &operator=(Enemy const &ref);

		void setX(float x);

		void drawEnemy();
		void moveEnemy();
};

#endif
