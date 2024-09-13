#include "world.hpp"

World::World(sf::Vector2f world_size)
{
	player = new Player();
	bg.setSize(world_size);
	bg.setFillColor(sf::Color::Green);
}
World::~World()
{
	delete player;
}