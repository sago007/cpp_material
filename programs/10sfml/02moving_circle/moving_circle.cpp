#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	float circlex = 0.0f;
	float circley = 0.0f;

	sf::Clock clock;  //start the clock
	sf::Int32 lastFrameTime = 0;
	sf::Time minimumSleepBetweenFrames = sf::milliseconds(10);


	//This is called a "game loop". It just runs continuesly until the game is closed
	while (window.isOpen()) {

		//Different computers runs at different speeds. Here we calculate how long a frame is on the machine that we are running
		sf::Int32 frameTime = clock.getElapsedTime().asMilliseconds();
		sf::Int32 deltaTime = frameTime - lastFrameTime;
		float fDeltaTime = static_cast<float>(deltaTime);
		lastFrameTime = frameTime;

		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			circlex -= 1.0f*(fDeltaTime/4.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			circlex += 1.0f*(fDeltaTime/4.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
			circley -= 1.0f*(fDeltaTime/4.0f);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
			circley += 1.0f*(fDeltaTime/4.0f);
		}
		shape.setPosition(circlex,circley);
		window.clear();
		window.draw(shape);
		window.display();
		sf::sleep(minimumSleepBetweenFrames);
	}
	return 0;
}
