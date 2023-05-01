#include "MainUpdate.h"

MainUpdate::MainUpdate()
{
}

MainUpdate::~MainUpdate()
{
}

void MainUpdate::Start()
{
	m_hdc = GetDC(g_hWnd);

	rePoint.left = 100;
	rePoint.top = 100;

	rePoint.right = 200;
	rePoint.bottom = 200;

	StartX = 100;
	StartY = 100;

	EndX = 200;
	EndY = 200;

	Speed = 0.1;
}

void MainUpdate::Update()
{
	if (GetAsyncKeyState(VK_UP))
	{
		rePoint.top -= Speed;

		rePoint.bottom -= Speed;
	}
	if (GetAsyncKeyState(VK_DOWN))
	{
		rePoint.top += Speed;

		rePoint.bottom += Speed;
	}
	if (GetAsyncKeyState(VK_LEFT))
	{
		rePoint.left -= Speed;

		rePoint.right -= Speed;
	}
	if (GetAsyncKeyState(VK_RIGHT))
	{
		rePoint.left += Speed;

		rePoint.right += Speed;
	}
}

void MainUpdate::Render()
{

	Rectangle(m_hdc, 
		rePoint.left,
		rePoint.top,
		rePoint.right,
		rePoint.bottom
	);
}

void MainUpdate::Destroy()
{
}

