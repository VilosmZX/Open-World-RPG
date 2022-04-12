#include <iostream>
#include <ctime>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include <SFML/Network.hpp>

class Game {
private:
	sf::RenderWindow* window;
	sf::Event ev;

	sf::Clock dtClock;
	float dt;

	void initWindow();
public:
	Game();
	virtual ~Game();

	void updateDt();
	void updateEvents();
	void update();
	void render();
	void run();
};