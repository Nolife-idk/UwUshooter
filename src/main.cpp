#include "world.hpp"
#include "test.hpp"
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
        // world->Collision(Enemy, Player);
        Test->Colllision();

        //Kresleníčko UWU
        window.clear();
        window.draw(world->bg);
        window.draw(world->player->shape);
        window.draw(world->enemy->shape1);    
        window.display();
    }

    return 0;
}