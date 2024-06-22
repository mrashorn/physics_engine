// main.cpp for testing out the graphics. 
//

#include <SFML/Graphics.hpp>

using namespace sf;

int main()
{
	Vector2f resolution;
	resolution.x = 800;
	resolution.y = 600;

	RenderWindow window(VideoMode(resolution.x, resolution.y), "Graphics Window");


	while (window.isOpen())
	{
		if(Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

	window.display();
	}

}
