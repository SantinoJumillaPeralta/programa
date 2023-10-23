#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 

using namespace sf;



int main() {
 

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Imagen con Puntos Rojo y Azul");




    Texture texture_rcircle;

    Texture texture_chessw;



    if (!texture_rcircle.loadFromFile("rcircle.png") || !texture_chessw.loadFromFile("chessw.png")) {

        return 1;  

    }


 

    Sprite sprite_rcircle;

    Sprite sprite_chessw;



    sprite_rcircle.setTexture(texture_rcircle);

    sprite_chessw.setTexture(texture_chessw);


 

    sprite_chessw.setPosition((800 - sprite_chessw.getGlobalBounds().width) / 2, (600 - sprite_chessw.getGlobalBounds().height) / 2);




    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }

 

        App.clear();




        App.draw(sprite_rcircle);

        App.draw(sprite_chessw);




        App.display();

    }



    return 0;

}