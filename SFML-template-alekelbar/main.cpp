#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main() {
	// creating my window
	sf::RenderWindow w(sf::VideoMode(640, 480), "hola mundo", sf::Style::Default);
	sf::Event ev;

	//game loop
	while (w.isOpen()) {

		// poll events
		while (w.pollEvent(ev))
		{
			switch (ev.type) {
			case sf::Event::Closed:
				w.close();
				break;
			case sf::Event::KeyPressed:
				if (ev.key.code == sf::Keyboard::Escape)
					w.close();
				break;
			}
		}

		// update


		// render
		w.clear();

		// draw you game


		// tell app that window drawing is done
		w.display();
	}

	// end of application


	return EXIT_SUCCESS;
}