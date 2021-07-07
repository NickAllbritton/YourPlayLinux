/*
 * main.cpp
 *
 *  Created on: Jul 1, 2021
 *      Author: nick
 */

#include "Game.h"

int main()
{
	Game g; // create a default game object

	while(g.GetWindow().isOpen())
	{
		sf::Event e;
		g.event(e);

		g.clear();
		g.update();
		g.draw();
		g.display();
	}
	return 0;
}

