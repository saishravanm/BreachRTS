#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Window.hpp>
#include <algorithm>
#include "renderer.h"

Renderer::Renderer()
{

}
sf::RectangleShape Renderer::renderSquare(Square s)
{
    sf::RectangleShape rect(sf::Vector2f(s.returnSize(),s.returnSize()));
    rect.setOutlineColor(s.returnOutline());
    rect.setFillColor(s.returnFill());
    rect.setOutlineThickness(2.f);
    rect.setPosition(s.returnPosition().x,s.returnPosition().y);
    return rect;

}   
void Renderer::plotGrid(Square grid[20][20],sf::Vector2f origin)
{
    for(int r = 0; r < 20;r++)
	{
		for(int c = 0; c < 20; c++)
		{
		grid[r][c] = Square(origin,20,sf::Color(255,255,255),sf::Color(0,0,0));
		origin.x+=20;
		}
		origin.y+=20;
		origin.x = 200;
	}
}
void Renderer::renderGrid(Square grid[20][20],sf::RenderWindow window, Renderer renderer)
{
	for(int r = 0;  r < 20; r++)
	{
		for(int c = 0; c < 20; c++)
		{	
			//grid[r][c] = Square(origin,20,sf::Color(255,255,255),defColor);
			window.draw(renderer.renderSquare(grid[r][c]));
		}
	}
}   

/*
bool Renderer::isMouseOnSquare(Square [20][20])
{
	for(int r = 0; r < 20; r++)
	{
		for(int c = 0; c < 20; c++)
		{
			if(sf::Mouse::getPosition(this->window).x = )
		}
	}
	return false;
}
*/