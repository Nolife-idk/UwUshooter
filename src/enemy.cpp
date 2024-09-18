#include "enemy.hpp"

using namespace sf;

Enemy::Enemy()
{
	size1 = {50.0f, 50.0f};
	shape1.setFillColor(sf::Color::Red);
	shape1.setPosition(100, 100);
	shape1.setSize(size1);
}