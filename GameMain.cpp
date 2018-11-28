#include "GameSys.h"
#include "User.h"
#include "Scene.h"
#include "Texture.h"
#include "GameMain.h"
#include "PaintTestScene.h"
#include "VertexBufferTest.h"
#include "WVPTest.h"
#include "SRTTest.h"
#include "TextureTest.h"
#include "TextureTest1.h"
#include "SolarSystem.h"

GameMain::GameMain()
{
}

GameMain::~GameMain()
{
	ReleaseAll();
}

void GameMain::Init(HWND hWnd)
{
	GameBase::Init(hWnd);

	pScene = new SolarSystem;
	pScene->Init();
}

void GameMain::Update()
{
	pScene->Update();
}

void GameMain::Render()
{
	pScene->Render();
}

void GameMain::ReleaseAll()
{
	GameBase::ReleaseAll();
	
	SafeDelete(pScene);

	INPUT->Release();
	Texture::ReleaseInstance();
}

void GameMain::ResetAll()
{
	GameBase::ResetAll();
}