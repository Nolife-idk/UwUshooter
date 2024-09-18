#pragma once

#include <SFML/Graphics.hpp>

class Enemy
{
public:
	sf::Vector2f size;
	sf::RectangleShape shape;
	
	Enemy();
};