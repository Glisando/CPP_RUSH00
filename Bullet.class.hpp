/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bullet.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdanylev <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:12:39 by hdanylev          #+#    #+#             */
/*   Updated: 2018/06/24 14:12:40 by hdanylev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BULLET_CLASS_HPP
# define BULLET_CLASS_HPP

class Bullet : public Unit {

	private:
		int _fired;

	public:
		Bullet();
		Bullet(float x, float y);
		Bullet(Bullet const &ref);
		~Bullet();

		Bullet &operator=(Bullet const &ref);

		void setFired(int fired);
		int getFired() const;

		void drawBullet();
		void moveBullet();
};

#endif