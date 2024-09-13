#include "world.hpp"

using namespace sf;

Vector2i window_size = {1920, 1080};

int main()
{
    RenderWindow window(VideoMode(window_size.x, window_size.y), "UWUShooter");
    World* world = new World(Vector2f(window_size));

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

        //Kresleníčko UWU
        window.clear();
        window.draw(world->bg);
        window.draw(world->player->shape);  
        window.display();
    }

    return 0;
}