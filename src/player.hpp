#pragma once

#include <SFML/Graphics.hpp>

class Player
{
public:
	float speed;
	sf::Vector2f size;
	sf::RectangleShape shape;
	Player();
	void movement();
};
