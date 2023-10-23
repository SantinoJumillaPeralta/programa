#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 

using namespace sf;


 

Texture texture_red;

Texture texture_yellow;

Texture texture_blue;

Texture texture_black;

Sprite sprite_red;

Sprite sprite_yellow;

Sprite sprite_blue;

Sprite sprite_black;



int main() {

    if (!texture_red.loadFromFile("cuad_red.jpg")) {

        return 1;

    }

    if (!texture_yellow.loadFromFile("cuad_yellow.jpg")) {

        return 1;

    }

    if (!texture_blue.loadFromFile("cuad_blue.jpg")) {

        return 1;

    }

    if (!texture_black.loadFromFile("chessb.jpg")) {

        return 1;

    }



    sprite_red.setTexture(texture_red);

    sprite_yellow.setTexture(texture_yellow);

    sprite_blue.setTexture(texture_blue);

    sprite_black.setTexture(texture_black);




    sprite_red.setPosition(0, 0);

    sprite_yellow.setPosition(800 - texture_yellow.getSize().x, 0); 

    sprite_blue.setPosition(0, 600 - texture_blue.getSize().y);  

    sprite_black.setPosition(800 - texture_black.getSize().x, 600 - texture_black.getSize().y); 



    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Reproducción de Imágenes");



    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }



        App.clear();

        App.draw(sprite_red);

        App.draw(sprite_yellow);

        App.draw(sprite_blue);

        App.draw(sprite_black);

        App.display();

    }



    return 0;

}