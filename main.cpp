#include<SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>
#include <SFML/Window/Window.hpp>
#include <iostream>
#include <fstream>
#include <string>
#include "renderer.h"
#include "entity.h"
using namespace std; 


const int wHeight = 600;
const int wWidth= 800;


int main(int argc, char * argv[])
{
	

	sf::RenderWindow window(sf::VideoMode(wWidth, wHeight),"SFML Window");
	
	Renderer renderer;
	sf::Vector2f origin(200,100);
	sf::Vector2i mouseOrigin(200,100);
	sf::Color defColor(0,0,0);
	sf::Color selectedColor(50,168,82);
	Square grid[20][20];
	renderer.plotGrid(grid, origin);
	sf::Sprite cursorSprite;
	Entity cursor(mouseOrigin,"cursor.png",cursorSprite,"Cursor");
	while (window.isOpen())
	{
		
		sf::Event event;
		while(window.pollEvent(event))	
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
			
		}
		cursor.setPos(sf::Mouse::getPosition(window));
		window.draw(cursorSprite);
		window.clear(sf::Color(0,0,0));
		for(int r = 0;  r < 20; r++)
		{
			for(int c = 0; c < 20; c++)
			{	
				//grid[r][c] = Square(origin,20,sf::Color(255,255,255),defColor);
				window.draw(renderer.renderSquare(grid[r][c]));
			}
		}		
		window.display();

	}

}





//Rectangle shape name, posx,posy,speedx,speedy,r,g,b,sizew,sizeh
//Circle shape name, posx,posy, speedx,speedy, r, g, b, radius
//Font file f, size, r, g, b
//Window h, w

