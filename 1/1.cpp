#include <SFML/Window.hpp> 
#include <SFML/Graphics.hpp> 

using namespace sf;




int main() {
 

    sf::RenderWindow App(sf::VideoMode(800, 600, 32), "Ventana con Puntos Rojos");




    sf::CircleShape redCircle(5);  

    redCircle.setFillColor(sf::Color::Red);


 

    sf::Vector2f topLeft(0, 0);

    sf::Vector2f topRight(800, 0);

    sf::Vector2f bottomLeft(0, 600);

    sf::Vector2f bottomRight(800, 600);




    while (App.isOpen()) {

        sf::Event event;

        while (App.pollEvent(event)) {

            if (event.type == sf::Event::Closed) {

                App.close();

            }

        }




        App.clear();




        redCircle.setPosition(topLeft);

        App.draw(redCircle);



        redCircle.setPosition(topRight);

        App.draw(redCircle);



        redCircle.setPosition(bottomLeft);

        App.draw(redCircle);



        redCircle.setPosition(bottomRight);

        App.draw(redCircle);




        App.display();

    }



    return 0;

}