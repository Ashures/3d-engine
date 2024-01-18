#include "GameObject.h"

GameObject::GameObject(Vector3 position, Vector3 rotation)
{
	_position = position;
	_rotation = rotation;
}

Vector3 GameObject::GetPosition()
{
	return _position;
}

void GameObject::SetPosition(Vector3 position)
{
	_position = position;
}

Vector3 GameObject::GetRotation()
{
	return _rotation;
}

void GameObject::SetRotation(Vector3 rotation)
{
	_position = rotation;
}
