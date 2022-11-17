#pragma once

#include <string>
#include <glm/glm.hpp>
#include <glm/vec3.hpp>

class MeshInfo {

public:

	MeshInfo();
	~MeshInfo();

	std::string meshName;

	glm::vec3 position;
	glm::vec3 velocity;
	glm::vec3 target;
	glm::vec3 rotation;
	glm::vec4 colour;
	glm::vec4 RGBAColour;

	
	float scale;
	bool isWireframe;
	bool isVisible;
	bool useRGBAColour;
};