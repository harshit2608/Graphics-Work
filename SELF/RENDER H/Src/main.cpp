#include <GLAD/glad.h>
#include <iostream>
#include <GLFW/glfw3.h>
#include <fstream>
#include <string>
#include <sstream>

// shader accessing code starts
// ----------------------------

// shader accessing code ends
// --------------------------

// functions


// settings

	// glfw: initialize and configure
	// ------------------------------

	// glfw window creation
	// --------------------

	// glad: load all OpenGL function pointers
	// ---------------------------------------


	// set up vertex data (and buffer(s)) and configure vertex attributes
	// ------------------------------------------------------------------



	// first triangle setup

	// render loop
	// -----------
	while (!glfwWindowShouldClose(window))
	{
		// input
		// -----

		glDrawElements(GL_TRIANGLES, 18, GL_UNSIGNED_INT, 0);

		// glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
		// -------------------------------------------------------------------------------
		glfwSwapBuffers(window);
		glfwPollEvents();
	}

	// optional: de-allocate all resources once they've outlived their purpose:
	// ------------------------------------------------------------------------


// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
