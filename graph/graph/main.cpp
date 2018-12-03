#include <SFML/Graphics.hpp>
#include "Graph.h"
int main()
{
	sf::RenderWindow window(sf::VideoMode(1000, 1000), "SFML works!");
	Graph graph;

	while (window.isOpen())
	{
		sf::Event event;
		srand(time(NULL));
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		graph.SetPoints();
		window.clear();
		window.draw(graph);
		window.display();
	}

	return 0;
}