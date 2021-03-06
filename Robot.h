#pragma once

#include "Entity.h"

const sf::Vector2i ROBOT_FRAME_SIZE = { 10, 16 };

class Robot : public Entity {
public:
	Robot();

	virtual void update(sf::Time elapsed) override;
	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
	virtual void dealDamage(float amount, sf::Vector2f direction = sf::Vector2f(), std::string damageType = "") override;

	// Stats
	//float moveSpeed = 80;
	//float groundAcceleration = 15;
	//float airAcceleration = 1;

	//float fireMaxCooldown = 0.5;
	float fireCooldown = 0;
	//float bombMaxCooldown = 2;
	float bombCooldown = 0;

	bool facingRight = true;
	int frame = 0;
	float frameCounter = 0;

	sf::Sprite sprite;
};

