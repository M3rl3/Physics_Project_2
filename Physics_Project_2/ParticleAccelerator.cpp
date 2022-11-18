#include <iostream>

#include "ParticleAccelerator.h"

ParticleAccelerator::ParticleAccelerator() {

}

ParticleAccelerator::~ParticleAccelerator() {
	particles.clear();
}

Particle* ParticleAccelerator::InitParticle(const glm::vec3& position) {
	Particle* part = new Particle(position);
	/*part->position = position;
	part->velocity = glm::vec3(-1.f, 1.f, -1.f);
	part->mass = 1.f;*/

	particles.push_back(part);
	return part;
}

void ParticleAccelerator::UpdateStep(float dt) {
	size_t numParticles = particles.size();

	/*for (int i = 0; i < numParticles; i++) {
		particles[i]->ApplyForce(glm::vec3(0, -9.81f, 0));
	}*/
	for (int i = 0; i < numParticles; i++) {
		particles[i]->ApplyForce(glm::vec3(1, 0, 0) * 5.f);
	}
	for (int i = 0; i < numParticles; i++) {
		particles[i]->Calculate(dt);
	}
	for (int i = 0; i < numParticles; i++) {
		particles[i]->KillAllForces();
	}
	
}