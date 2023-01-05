#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Glsl.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Window.hpp>
class Square
{  
    public:
    Square();
    Square(sf::Vector2f p,int s,sf::Color o, sf::Color f);
     //renders square given paramaters
    void setPosition(sf::Vector2f pp)
    {
        position = pp;
    }
    void setSize(int s)
    {   
        size = s;
    }
    void setOutline(sf::Color o)
    {
        outline = o;
    }
    void setFill(sf::Color f)
    {
        fill = f;
    }
    float returnSize()
    {
        return size;
    }
    sf::Vector2f returnPosition()
    {
        return position;
    }
    sf::Color returnOutline()
    {
        return outline;
    }
    sf::Color returnFill()
    {
        return fill;
    }
    protected:
        bool selectable;
        sf::Vector2f position; 
        float size; 
        sf::Color outline; 
        sf::Color fill;

};