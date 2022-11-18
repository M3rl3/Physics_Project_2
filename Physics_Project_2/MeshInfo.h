#pragma once

#include <vector>
#include <string>
#include <glm/glm.hpp>
#include <glm/vec3.hpp>

#include "AABB.h"
#include "Particle.h"
#include "cVAOManager/cVAOManager.h"

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
	bool drawBBox;
	bool useRGBAColour;

	BoundingBox boundingBox;
	Particle* particle;

	std::vector <glm::vec3> vertices;

	void CopyVertices(sModelDrawInfo model);
};