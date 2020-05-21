#include "Shader.h"

std::string Shader::ShaderProgramSource(const char* filepath)
{
	std::string content;
	std::string line = "";
	std::ifstream file;
	file.open(filepath, std::ios::in);
	while (!file.eof())
	{
		getline(file, line);
		content.append(line + "\n");
	}
	file.close();
	return content;
}

unsigned int Shader::createShaderProgram(const char* vp, const char* fp)
{
	unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
	unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
	std::string vertShaderStr = ShaderProgramSource("Res/Shaders/Vertex.glsl");
	std::string fragShaderStr = ShaderProgramSource("Res/Shaders/Fragment.glsl");
	const char* vertShaderSrc = vertShaderStr.c_str();
	const char* fragShaderSrc = fragShaderStr.c_str();
	glShaderSource(vertexShader, 1, &vertShaderSrc, NULL);
	glShaderSource(fragmentShader, 1, &fragShaderSrc, NULL);
	glCompileShader(vertexShader);
	glCompileShader(fragmentShader);
	unsigned int vfProgram = glCreateProgram();
	glAttachShader(vfProgram, vertexShader);
	glAttachShader(vfProgram, fragmentShader);
	glLinkProgram(vfProgram);
	return vfProgram;
}
