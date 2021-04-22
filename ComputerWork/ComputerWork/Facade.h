#pragma once
class Facade
{
private:
	Component* _powerSupply = nullptr;
	Component* _opticalDiscReaders = nullptr;
	Component* _ram = nullptr;
	Component* _sensors = nullptr;
	Component* _videoDriver = nullptr;
	Component* _winchester = nullptr;

	void Clear();
public:
	Facade();
	~Facade();

	void BeginWork();
	void FinishWork();
};



