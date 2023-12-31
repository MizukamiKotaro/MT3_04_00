#include "Behavior.h"

void BehaviorSpring(Spring* spring, Ball* ball) {

	MyVector3 diff = ball->position - spring->anchor;
	float length = diff.Length();

	if (length != 0) {
		MyVector3 restPosition = spring->anchor + diff.Normalize() * spring->naturalLength;
		MyVector3 displacement = length * (ball->position - restPosition);
		MyVector3 restoringForce = -spring->stiffness * displacement;
		MyVector3 dampingForce = -spring->dampingCoefficient * ball->velocity;
		MyVector3 force = restoringForce + dampingForce;
		ball->acceleration = force / ball->mass;
	}
	float deltaTime = 1.0f / 60.0f;

	ball->velocity += ball->acceleration * deltaTime;
	ball->position += ball->velocity * deltaTime;
}

void BehaviorSpring(Spring* spring, Ball* ball, const MyVector3& gravity) {

}