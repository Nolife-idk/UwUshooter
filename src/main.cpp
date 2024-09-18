#include "world.hpp"
#include "events.hpp"
#include "configuration.hpp"
#include <iostream>

int main()
{
    sf::RenderWindow window(sf::VideoMode(conf::window_size.x, conf::window_size.y), "UWUShooter");
    World* world = new World(sf::Vector2f(conf::window_size));

    sf::Clock deltaClock;

    while (window.isOpen())
    {
        //Events
        sf::Time dt_time = deltaClock.restart();
        const float dt = dt_time.asSeconds();
        processEvents(window);

        //update
        world->player->movement(dt);
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