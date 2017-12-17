#include <iostream>
#include <GLFW\glfw3.h>

#ifndef __Raze__GameManager__
#define __Raze__GameManager__



class GameManager
{
private:
	GameManager();
	~GameManager();
public:

   static void  destroyGameManager();
	static GameManager& getGameManager();

};

#endif /* defined(__Raze__GameManager__) */
