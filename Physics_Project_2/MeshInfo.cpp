#include "MeshInfo.h"

MeshInfo::MeshInfo() {

	this->position = glm::vec3(0.0f);
	this->rotation = glm::vec3(0.0f);
	this->colour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	this->scale = 1.0f;
	this->isWireframe = false;
	this->isVisible = true;
	this->RGBAColour = glm::vec4(0.0f, 0.0f, 0.0f, 1.0f);
	this->useRGBAColour = false;
}

MeshInfo::~MeshInfo() {

}