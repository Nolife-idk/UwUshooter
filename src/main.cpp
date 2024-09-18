#include "world.hpp"
#include "events.hpp"
#include <iostream>

sf::Vector2i window_size = {1920, 1080};

int main()
{

    sf::RenderWindow window(sf::VideoMode(window_size.x, window_size.y), "UWUShooter");
    World* world = new World(sf::Vector2f(window_size));

    while (window.isOpen())
    {
        //Events
        processEvents(window);

        //update
        world->player->movement();
        // world->Collision(Enemy, Player);
        
        if (world->player->shape.getGlobalBounds().intersects(world->enemy->shape.getGlobalBounds())) {
            window.close();
            std::cout << "Game Over!" << std::endl;
        }
        
        //Kresleníčko UWU
        window.clear();
        window.draw(world->bg);
        window.draw(world->player->shape);
        window.draw(world->enemy->shape);    
        window.display();
    }

    return 0;
}