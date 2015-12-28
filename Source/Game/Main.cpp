#include "Game.h"
#include <iostream>
#include "Utils\Vector3.h"

Utils::Vector3<int> v3;

template <typename T>
Utils::Vector3<T> auxiliar(){
	Utils::Vector3<int> v5(2, 2, 2);
	return v3 + v5;
}

/*#ifdef _DEBUG

int main(int argc, char **argv)
{

#else
#include <windows.h>*/

int WINAPI
WinMain(HINSTANCE zhInstance, HINSTANCE prevInstance, LPSTR lpCmdLine, int nCmdShow)
{
//#endif

	/*Game::Game game;

	if (!game.init()){
		std::cerr << "Error while init the Game Engine. \n";
		return -1;
	}

	game.run();
	
	game.release();*/

	
	Utils::Vector3<int> v4(3, 4, 5);

	v3 = v4;

	v4 = auxiliar<int>();

	Utils::Vector3<int> v5 = auxiliar<int>();

	return 0;
}

