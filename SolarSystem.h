#pragma once

class Planet;

class SolarSystem : public Scene
{
	Texture*	back;
	Planet*		sun;
	Planet*		earth;
	Planet*		moon;

	D3DXMATRIX	bgWorld;


	D3DXMATRIX	proj;

public:
	SolarSystem();
	~SolarSystem();

	bool Init();
	void Update();
	void Render();

};

