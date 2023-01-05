#include<SFML/Graphics.hpp>
#include <SFML/Graphics/Image.hpp>
#include <SFML/Graphics/RenderTexture.hpp>
#include <SFML/Graphics/Sprite.hpp>
#include <SFML/System/Vector2.hpp>
#include<string>
#include <iostream>
class Entity{
    public:
    Entity(sf::Vector2i p, std::string f, sf::Sprite s, std::string n); 
    void setPos(sf::Vector2i f)
    {
        pos = f;
    }
    void setFileName(std::string f)
    {
        textureFileName = name;
    }
    void setSprite(sf::Sprite s)
    {
        sprite = s;
        sf::Texture text;
        text.loadFromFile(textureFileName); 
        if(!text.loadFromFile(textureFileName))
        {
            std::cout << "TEXTURE NOT FOUND" << std::endl;
        }
        s.setTexture(text);
    }
    void setName(std::string n)
    {
        name = n;
    }
    void updateCursorPos(Entity e);
    protected: 
    sf::Vector2i pos;
    std::string textureFileName;
    sf::Sprite sprite;
    std::string name; 
    
};