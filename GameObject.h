#include "raylib.h"

#pragma once
class GameObject
{
protected:
	Vector3 _position;
	Vector3 _rotation;
	bool _enabled = true;
public:
	GameObject(Vector3 position, Vector3 rotation);

	bool IsEnabled();
	void Toggle();

	Vector3 GetPosition();
	void SetPosition(Vector3 positon);

	Vector3 GetRotation();
	void SetRotation(Vector3 rotation);
};

