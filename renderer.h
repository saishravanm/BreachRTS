#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Color.hpp>
#include <SFML/Graphics/Glsl.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/Graphics/RenderWindow.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Window.hpp>
#include "square.h"
class Renderer{
public:
    Renderer();
    sf::RenderWindow window;
    sf::RectangleShape renderSquare(Square s);
    void renderGrid(Square grid[20][20],sf::RenderWindow window, Renderer renderer);
    void plotGrid(Square grid[20][20],sf::Vector2f origin);
    bool isMouseOnSquare(Square grid[20][20]);


};
