#pragma once
#include <glad/glad.h>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader {
public:
	// the program ID
	unsigned int ID;

	// constructor reads and builds the shader
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath, const GLchar* geometryPath = nullptr);

	// activate the shader
	void use();

	// utility uniform functions
	void setBool(const std::string &name, bool value) const;
	void setFloat(const std::string &name, float value) const;
	void setInt(const std::string &name, int value) const;
	void setMat4(const std::string &name, glm::mat4 &value) const;
	void setVec3(const std::string &name, glm::vec3 &value) const;
	void setVec3(const std::string &name, float x, float y, float z) const;
};