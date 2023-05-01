#pragma once
#include "Include.h"

class MainUpdate
{
private:
	HDC m_hdc;

	RECT rePoint;

	int StartX, StartY, EndX, EndY;
	int Speed;

public:
	void Start();
	void Update();
	void Render();
	void Destroy();
public:
	MainUpdate();
	~MainUpdate();

};

