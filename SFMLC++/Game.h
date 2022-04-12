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

	void initWindow();
public:
	Game();
	virtual ~Game();

	void updateEvents();
	void update();
	void render();
	void run();
};