#pragma once

#include "player.hpp"
#include "enemy.hpp"

class World
{
public:
	World(sf::Vector2f world_size);
	~World();
	sf::RectangleShape bg;
	Player* player;
	Enemy* enemy;
	// void Collision();
};
