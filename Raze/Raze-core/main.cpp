#include <iostream>
#include "Gamemanager.h"
using namespace std;

int main(int argc, char**argv)
{

	GameManager *gameManager = &GameManager::getGameManager();
	GameManager::destroyGameManager();
	system("PAUSE");
}