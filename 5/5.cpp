#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 

using namespace sf;



int main() {

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Rotación de Imagen");



    Texture texture;

    Sprite sprite;



    if (!texture.loadFromFile("fondo.jpg")) {
 

        return 1;

    }



    sprite.setTexture(texture);




    sprite.setOrigin(texture.getSize().x / 2, texture.getSize().y / 2);


 

    sprite.setPosition(400, 300);



    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }




        sprite.rotate(1.0f); 



        App.clear();

        App.draw(sprite);

        App.display();

    }



    return 0;

}