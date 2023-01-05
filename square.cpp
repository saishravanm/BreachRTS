#include "square.h"
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Window.hpp>
Square::Square(sf::Vector2f p,int s,sf::Color o, sf::Color f)
{
    this->setPosition(p);
    this->setSize(s);
    this->setOutline(o);
    this->setFill(f);
    
}
Square::Square()
{
    
}
