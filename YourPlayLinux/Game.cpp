/*
 * Game.cpp
 *
 *  Created on: Jul 1, 2021
 *      Author: nick
 */

#include "Game.h"

Game::Game(int w, int h, std::string t) : width(w), height(h), title(t), wnd(sf::VideoMode(width, height), title) {}

const sf::RenderWindow& Game::GetWindow() // return constant reference to the window object
{
	return this->wnd;
}

bool Game::event(sf::Event& e)
{
	bool no_err = wnd.pollEvent(e);
	if(no_err)
	{
		if(e.type == sf::Event::Closed) wnd.close();
	}
	return no_err;
}

// do not call a non-const method from the return value of this method
int Game::GetWidth()
{
	return this->width;
}

int Game::GetHeight()
{
	return this->height;
}

void Game::clear() // clear the screen
{
	wnd.clear(sf::Color::Black);
}

void Game::update() // update the game
{
	// game logic
}

void Game::draw() // draw the game at that moment
{
	// draw the screen
}

void Game::display() // display the window
{
	wnd.display();
}
