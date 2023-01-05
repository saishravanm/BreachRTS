#include "entity.h"
#include <SFML/Window/Mouse.hpp>
#include "SFML/Graphics.hpp"
Entity::Entity(sf::Vector2i p, std::string i, sf::Sprite s, std::string n)
{
    setFileName(i);
    setSprite(s);
    setName(n);
    setPos(p);

}


