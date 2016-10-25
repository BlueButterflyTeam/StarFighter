/*
*
* Classe d'agent poursuiveur qui utilise l'offset pursuit
* ainsi que la séparation
*
* Created by : Paul
*/

#include "Vehicle.h"

class SteeringBehavior;

class Agent : public Vehicle
{
private:
	Vector2D offset = Vector2D(-20, 0);

public:
	Agent(GameWorld* world,
		Vector2D position,
		double    rotation,
		Vector2D velocity,
		double    mass,
		double    max_force,
		double    max_speed,
		double    max_turn_rate,
		double    scale);

	~Agent();

	void setLeader(Vehicle* leader);
	void setOffset(Vector2D offset);

private:

};