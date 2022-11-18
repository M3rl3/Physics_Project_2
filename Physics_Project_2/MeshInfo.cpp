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

void MeshInfo::CopyVertices(sModelDrawInfo model) {
	unsigned int numVertices = model.numberOfVertices;
	std::vector <glm::vec3> vertices(numVertices);
	for (int i = 0; i < numVertices; i++) {
		vertices[i].x = model.pVertices[i].x;
		vertices[i].y = model.pVertices[i].y;
		vertices[i].z = model.pVertices[i].z;
	}
	this->vertices = vertices;
}