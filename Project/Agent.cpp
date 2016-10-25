#include "SteeringBehaviors.h"
#include "Agent.h"

Agent::Agent(GameWorld* world,
	Vector2D position,
	double    rotation,
	Vector2D velocity,
	double    mass,
	double    max_force,
	double    max_speed,
	double    max_turn_rate,
	double    scale) : Vehicle(world, position, rotation, velocity, mass, max_force, max_speed, max_turn_rate, scale)
{
	m_pSteering->SeparationOn();
}

Agent::~Agent()
{
}

void Agent::setLeader(Vehicle* leader)
{
	m_pSteering->OffsetPursuitOn(leader, offset);
}

void Agent::setOffset(Vector2D offset)
{
	this->offset = offset;
}