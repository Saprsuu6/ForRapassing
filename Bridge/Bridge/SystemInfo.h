#pragma once

class SystemInfo
{
protected:
	Component* _components = nullptr;;
public:
	SystemInfo() = default;

	SystemInfo(Component* components)
	{
		_components = components;
	}

	void ChangeComponent(Component* components)
	{
		_components = components;
	}

	virtual void ShowFeatures()
	{
		_components->ShowFeatures();
	}

	virtual ~SystemInfo() = default;
};

