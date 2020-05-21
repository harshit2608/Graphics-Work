#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

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