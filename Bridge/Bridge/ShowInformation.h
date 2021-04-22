#pragma once
#include "Header.h"
class ShowInformation
{
private:
	const Component* _component = nullptr;
public:
	ShowInformation() = default;
	ShowInformation(const Component* component);

	void SetComponent(const Component* component);
	void ShowInfo() const;
};

inline ShowInformation::ShowInformation(const Component* component)
{
	SetComponent(component);
}

inline void ShowInformation::SetComponent(const Component* component)
{
	if (component != nullptr) {
		_component = component;
	}
}

inline void ShowInformation::ShowInfo() const
{
	_component->ShowInfo();
}

