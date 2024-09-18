#include "world.hpp"


World::World(sf::Vector2f world_size)
{
	player = new Player();
	enemy = new Enemy();
	bg.setSize(world_size);
	bg.setFillColor(sf::Color::Green);
}
World::~World()
{
	delete player;
	delete enemy;
}
// void World::Collision()
// {

// 	if(Player.getSprite().getGlobalBounds().intersects(Enemy.getSprite().getGlobalBounds()))
// 	{
// 		sf::Text wtff;
// 	}
// }
