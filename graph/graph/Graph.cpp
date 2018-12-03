#include "Graph.h"



Graph::Graph()
{
	m_points.setPrimitiveType(sf::Points); //Set primitive type
	m_points.resize(m_iNumOfPoints); //Set the number of points
}

void Graph::SetPoints()
{
	for (int i = 0; i < m_points.getVertexCount(); i++) {
		m_points[i].position = sf::Vector2f(RandomNumber(), RandomNumber()); //Set the X and Y coordinates to the random numbers generated from RandomNumber().
		m_points[i].color = sf::Color::Yellow; //Set a color.
		std::cout << "Position X: " << m_points[i].position.x << std::endl << "Position Y: " << m_points[i].position.y << std::endl;
	}
}


int Graph::RandomNumber()
{
	return(rand() % 1000 + 1); //Return a random number from 1 to 1000.
}

void Graph::draw(sf::RenderTarget & target, sf::RenderStates states) const
{
	states.texture = NULL; //Sets no texture.
	target.draw(m_points, states); //Draws the points onto the window.
}


