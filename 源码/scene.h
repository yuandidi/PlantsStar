#pragma once

#include"camera.h"

#include<graphics.h>

class Scene
{
public:
	Scene() = default;
	~Scene() = default;
	virtual void on_enter() {};
	virtual void on_update(int delta) {};
	virtual void on_draw(const Camera & camera) {};
	virtual void on_input(const ExMessage& msg) {};
	virtual void on_exit() {};

private:

};