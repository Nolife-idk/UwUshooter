#include "player.hpp"

using namespace sf;

Player::Player()
{
	speed = 10;
	size = {50.0f, 50.0f};
	shape.setFillColor(sf::Color::Blue);
	shape.setPosition(100, 500);
	shape.setSize(size);
}
void Player::movement(float dt)
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		shape.move(-1.f * speed * dt, 0.f);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		shape.move(+1.f * speed * dt, 0.f);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		shape.move(0.f, -1.f * speed * dt);
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))	
		shape.move(0.f, +1.f * speed * dt);
}

