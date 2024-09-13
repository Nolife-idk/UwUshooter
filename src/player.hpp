#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
	float radius;
	float speed;
	sf::CircleShape shape;
	Player();
	void movement();
};
