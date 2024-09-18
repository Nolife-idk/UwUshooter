#include "world.hpp"
#include <iostream>
using namespace sf;

Vector2i window_size = {1920, 1080};

int main()
{

    RenderWindow window(VideoMode(window_size.x, window_size.y), "UWUShooter");
    World* world = new World(Vector2f(window_size));

    sf::Sprite player;
    sf::Sprite enemy;


    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed)
                window.close();
        }

        //update
        world->player->movement();
        // world->Collision(Enemy, Player);
        
        if (player.getGlobalBounds().intersects(enemy.getGlobalBounds())) {
            // End the game when collision occurs
            window.close();
            std::cout << "Game Over!" << std::endl;
        }
        //Kresleníčko UWU
        window.clear();
        window.draw(world->bg);
        window.draw(world->player->shape);
        window.draw(world->enemy->shape1);    
        window.display();
    }

    return 0;
}