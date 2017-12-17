#include "Gamemanager.h"



GameManager::GameManager()
{

}

GameManager::~GameManager()
{

}


GameManager& GameManager::getGameManager()
{
	static GameManager *gameManager = NULL;

	if (gameManager == NULL)
	{

		glfwInit();
		
		glfwWindowHint(GLFW_DEPTH_BITS, 24);
		glfwWindowHint(GLFW_RED_BITS, 8);
		glfwWindowHint(GLFW_GREEN_BITS, 8);
		glfwWindowHint(GLFW_BLUE_BITS, 8);
		glfwWindowHint(GLFW_ALPHA_BITS, 8);

		GLFWwindow *window = glfwCreateWindow(800, 600, "Game", NULL, NULL);
		glfwMakeContextCurrent(window);

		gameManager = new GameManager();

		std::cout << "Game Manager Has Been Created!" << std::endl;
	}

	return *gameManager;

	
}

void GameManager::destroyGameManager()
{
	GameManager *gameManager = &getGameManager();
		delete gameManager;

	std::cout << "Game Manager Has Been Destroyed!" << std::endl;

		GLFWwindow *window = glfwGetCurrentContext();
		glfwDestroyWindow(window);

	glfwTerminate();
}
