#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>


//settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;


int main()
{
	// glfw initialize and configure
	// -----------------------------
	glfwInit();
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef APPLE
	glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);	//uncomment these lines to use on mac OS
#endif // APPLE

	// glfw window creation
	// --------------------
	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "DUAL TRIANGLE", NULL, NULL);
	if (window == NULL)
	{
		std::cout << "Failed to create the window !!" << std::endl;
		glfwTerminate();
		return -1;
	}
	glfwMakeContextCurrent(window);


	// glad: load all OPENGL function pointers
	// ---------------------------------------
	if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
	{
		std::cout<< "Failed to initialize glad !!" <<std::endl;
		return -1;
	}


	glfwTerminate();
	return 0;
}