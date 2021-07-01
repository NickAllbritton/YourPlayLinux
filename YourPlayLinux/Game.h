/*
 * Game.h
 *
 *  Created on: Jul 1, 2021
 *      Author: nick
 */

#ifndef GAME_H_
#define GAME_H_

#include <SFML/Graphics.hpp>
#include <string>

class Game
{
private:
	int width = 1200; // width of application window
	int height = 800; // height ^^^
	std::string title = "Your Play";
	sf::RenderWindow wnd = sf::RenderWindow(sf::VideoMode(width, height), title);
public:
	Game() = default;
	Game(int w, int h, std::string t);
	void CloseWindow();
	const sf::RenderWindow& GetWindow(); // return constant reference to the window object
	// do not call a non-const method from the return value of this method
	int GetWidth();
	int GetHeight();
	bool event(sf::Event& e); // process ui events and change game's event state
	void clear(); // clear the screen
	void update(); // update the game
	void draw(); // draw the game at that moment
	void display(); // display the window
};


#endif /* GAME_H_ */
