#pragma once

#include <GL/glew.h>
//#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <cmath>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Shader
{
public:
	static std::string ShaderProgramSource(const char* filepath);
	static unsigned int createShaderProgram(const char* vp, const char* fp);
};