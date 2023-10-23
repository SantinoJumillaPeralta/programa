#include <SFML/Window.hpp> 

#include <SFML/Graphics.hpp> 

using namespace sf;



int main() {

    // Carga la textura de "plataforma" 

    Texture plataformaTexture;

    plataformaTexture.loadFromFile("plataforma.png");



    // Crea la ventana 

    RenderWindow window(VideoMode(800, 600), "Pilares y Plataforma");




    float pilarScaleX = 0.5f;

    float pilarScaleY = 0.5f;

    float pilarSpacing = 100.0f;




    for (int i = 0; i < 7; ++i) {
 

        Sprite pilar;

        pilar.setTexture(plataformaTexture);

        pilar.setScale(pilarScaleX, pilarScaleY);

        pilar.setPosition(i * pilarSpacing, 400); 




        window.draw(pilar);




        pilarScaleX += 0.1f;

        pilarScaleY += 0.1f;

    }



    Sprite plataforma;

    plataforma.setTexture(plataformaTexture);

    plataforma.setScale(3.0f, 1.0f);

    plataforma.setPosition(7 * pilarSpacing, 400); 




    while (window.isOpen()) {

        Event event;

        while (window.pollEvent(event)) {

            if (event.type == Event::Closed) {

                window.close();

            }

        }



        window.clear(); 

        window.draw(plataforma);

        window.display(); 

    }



    return 0;

}