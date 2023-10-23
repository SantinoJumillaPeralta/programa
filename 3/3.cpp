#include <SFML/Graphics.hpp> 



int main() {


    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Mi Videojuego");


 

    sf::Texture texture_fondo;

    if (!texture_fondo.loadFromFile("fondo.jpg")) {
 

        return 1;

    }




    sf::Sprite sprite_fondo;

    sprite_fondo.setTexture(texture_fondo);

    sprite_fondo.setTextureRect(sf::IntRect(0, 0, App.getSize().x, App.getSize().y));



    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }




        App.draw(sprite_fondo);


 

        App.display();

    }



    return 0;

}