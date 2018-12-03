#pragma once
#include<SFML/Graphics.hpp>
#include<iostream>
class Graph : public sf::Drawable, public sf::Transformable
{
public:
	Graph();
	void SetPoints();
	int RandomNumber();
	void draw(sf::RenderTarget &target, sf::RenderStates states) const;
	void RotateLine(float degrees);
private:
	sf::VertexArray m_points;
	unsigned int m_iNumOfPoints = 20;
	float m_fMass = 200.f;
	float m_fVelocity = 25.f;
	float m_fResistance = 100.f;
	float m_fResult;
	int randomNum = rand() % 100 + 1;
	float m_fTimeStep = 0.25f;
};

