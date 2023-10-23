#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 

using namespace sf;




Texture texture_white;

Texture texture_black;

Sprite sprite_white;

Sprite sprite_black;




int main() {
 

    if (!texture_white.loadFromFile("chessw.jpg")) {

        return 1; 

    }

    if (!texture_black.loadFromFile("chessb.jpg")) {

        return 1; 

    }




    sf::RenderWindow App(sf::VideoMode(800, 800, 32), "Tablero de Ajedrez");




    int boardSize = 8;

    float squareSize = 800.0f / boardSize;


 

    for (int i = 0; i < boardSize; i++) {

        for (int j = 0; j < boardSize; j++) {


            Sprite& currentSprite = (i + j) % 2 == 0 ? sprite_white : sprite_black;

            currentSprite.setTexture((i + j) % 2 == 0 ? texture_white : texture_black);




            currentSprite.setPosition(i * squareSize, j * squareSize);

            currentSprite.setScale(squareSize / currentSprite.getGlobalBounds().width,

                squareSize / currentSprite.getGlobalBounds().height);




            App.draw(currentSprite);

        }

    }




    App.display();




    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }

    }



    return 0;

}