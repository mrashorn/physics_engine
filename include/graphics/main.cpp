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



	sf::CircleShape my_circle(50.f, 40); // radius, number of points or sides = quality
	my_circle.setFillColor(sf::Color(100,250,50));
	my_circle.setPosition((resolution.x/2) - my_circle.getRadius(), 
			(resolution.y/2) - my_circle.getRadius());


	while (window.isOpen())
	{
		if(Keyboard::isKeyPressed(Keyboard::Escape))
		{
			window.close();
		}

	window.draw(my_circle);
	window.display();
	}

}
