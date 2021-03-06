#include "Game.h"

void Game::initWindow() {
	this->window = new sf::RenderWindow(sf::VideoMode(800, 600), "Game");
}

Game::Game() {
	this->initWindow();
}

Game::~Game() {
	delete this->window;
}

void Game::updateDt()
{
	this->dt = this->dtClock.restart().asSeconds();
	system("cls");
	std::cout << this->dt << std::endl;
}

void Game::updateEvents()
{
	while (this->window->pollEvent(this->ev)) {
		if (this->ev.type == sf::Event::Closed)
		{
			this->window->close();
		}
	}
}

void Game::update()
{
	this->updateEvents();
}

void Game::render()
{
	this->window->clear();

	this->window->display();
}

void Game::run()
{
	while (this->window->isOpen())
	{
		this->updateDt();
		this->update();
		this->render();
	}
}
