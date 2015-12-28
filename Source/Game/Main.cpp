#include "Game.h"
#include <iostream>


/*#ifdef _DEBUG

int main(int argc, char **argv)
{

#else
#include <windows.h>*/

int WINAPI
WinMain(HINSTANCE zhInstance, HINSTANCE prevInstance, LPSTR lpCmdLine, int nCmdShow)
{
//#endif

	Game::Game game;

	if (!game.init()){
		std::cerr << "Error while init the Game Engine. \n";
		return -1;
	}

	game.run();
	
	game.release();

	return 0;
}

