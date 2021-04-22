#pragma once
class ShowAnimalInfo
{
public:
	void ShowHarbivore(const Carnivore& carnivore) const;
	void ShowCarbivore(const Herbivore& herbivore) const;
};

inline void ShowAnimalInfo::ShowHarbivore(const Carnivore& carnivore) const
{
	cout << "Power: " << carnivore.GetPower() << endl;
	carnivore.GetLife() ? cout << "Alive" << endl : cout << "Dead" << endl;
}

inline void ShowAnimalInfo::ShowCarbivore(const Herbivore& herbivore) const
{
	cout << "Weight: " << herbivore.GetWeight() << endl;
	herbivore.GetLife() ? cout << "Alive" << endl : cout << "dead" << endl;
}

