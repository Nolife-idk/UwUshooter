#include "player.hpp"

using namespace sf;

Player::Player()
{
	radius = 20;
	speed = 10;
	shape.setFillColor(sf::Color::Blue);
	shape.setPosition(100, 500);
	shape.setRadius(radius);
}
void Player::movement()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		shape.move(-1.f * speed, 0.f);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		shape.move(+1.f * speed, 0.f);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		shape.move(0.f, -1.f * speed);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))	
		shape.move(0.f, +1.f * speed);
}
