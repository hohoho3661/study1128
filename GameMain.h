#pragma once
#include "GameBase.h"

class Scene;

class GameMain :
	public GameBase
{
private:
	Scene * pScene;

public:
	GameMain();
	virtual ~GameMain();

	void Init(HWND hWnd);
	void Update();
	void Render();	

	void ReleaseAll();
	void ResetAll();
};

