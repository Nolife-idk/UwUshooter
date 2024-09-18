#include "enemy.hpp"

using namespace sf;

Enemy::Enemy()
{
	size = {50.0f, 50.0f};
	shape.setFillColor(sf::Color::Red);
	shape.setPosition(100, 400);
	shape.setSize(size);
}