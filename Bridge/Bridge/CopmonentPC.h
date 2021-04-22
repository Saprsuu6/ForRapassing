#pragma once

class Component
{
protected:
	string _model;
public:

	void SetModel(string model) { _model = model; }

	string GetModel() { return _model; }

	virtual void ShowFeatures() = 0;
	void ShowModel()
	{
		cout << "Model: " << _model << "\n";
	}

	virtual ~Component() = 0 {};
};

class CPU : public Component
{
	float _frequency;
	float _techprocess;
	float _cores;
	float _power_consumption;
public:
	CPU(string model, float frequency, float techprocess, float cores,
		float power_consumption)
	{
		SetModel(model);
		SetFrequency(frequency);
		SetTechprocess(techprocess);
		SetCores(cores);
		SetPower_consumption(power_consumption);
	}

	void SetFrequency(float frequency)
	{
		if (frequency > 0)
			_frequency = frequency;
	}
	void SetTechprocess(float techprocess)
	{
		if (techprocess > 0)
			_techprocess = techprocess;
	}
	void SetCores(float cores)
	{
		if (cores > 0)
			_cores = cores;
	}
	void SetPower_consumption(float power_consumption)
	{
		if (power_consumption > 0)
			_power_consumption = power_consumption;
	}

	float GetFrequency() { return _frequency; }
	float GetTechprocess() { return _techprocess; }
	float GetCores() { return _cores; }
	float GetPower_consumption() { return _power_consumption; }

	void ShowCPUFeatures()
	{		
		ShowModel();
		cout << "Frequency: " << _frequency << " GHc" << "\n";
		cout << "Techprocess: " << _techprocess << " nm" << "\n";
		cout << "Cores: " << _cores << "\n";
		cout << "Power consumption: " << _power_consumption << " W" << "\n";
	}

	virtual void ShowFeatures() override
	{
		cout << "CPU: \n";
		ShowCPUFeatures();
	}

	virtual ~CPU() = default;
};

class GPU : public CPU
{
	float _millions_of_rays;
	bool _hasRayTrasing;
public:
	GPU(string model, float frequency, float techprocess, float cores,
		float power_consumption, float millions_of_rays, bool hasRayTrasing)
		: CPU(model, frequency, techprocess, cores, power_consumption)
	{
		SetMillions_of_rays(millions_of_rays);
		SetHasRayTrasing(hasRayTrasing);
	}

	void SetMillions_of_rays(float millions_of_rays)
	{
		if (millions_of_rays > 0)
			_millions_of_rays = millions_of_rays;
	}

	void SetHasRayTrasing(bool hasRayTrasing) { _hasRayTrasing = hasRayTrasing; }

	void ShowGPUFeatures()
	{
		ShowCPUFeatures();
		cout << "Millions of rays: " << _millions_of_rays << "\n";
		if(_hasRayTrasing)
			cout << "HasRayTrasing: yes" << "\n";
		else
			cout << "HasRayTrasing: no" << "\n";
	}

	virtual void ShowFeatures() override
	{
		cout << "GPU: \n";
		ShowGPUFeatures();
	}

	float GetMillions_of_rays() { return _millions_of_rays; }
	bool  GetHasRayTrasing() { return _hasRayTrasing; }
};

class HDD : public Component
{
	int _capasity;
	int _rotation_speed;
	int _buffer_size;
public:
	HDD(string model, float capasity, float rotation_speed, float buffer_size)
	{
		SetModel(model);
		SetCapasity(capasity);
		SetRotation_speed(rotation_speed);
		SetBuffer_size(buffer_size);
	}

	void SetCapasity(float capasity)
	{
		if (capasity > 0)
			_capasity = capasity;
	}
	void SetRotation_speed(float rotation_speed)
	{
		if (rotation_speed > 0)
			_rotation_speed = rotation_speed;
	}
	void SetBuffer_size(float buffer_size)
	{
		if (buffer_size > 0)
			_buffer_size = buffer_size;
	}

	int GetCapasity() { return _capasity; }
	int GetRotation_speed() { return _rotation_speed; }
	int GetBuffer_size() { return _buffer_size; }

	void ShowHDDFeatures()
	{
		ShowModel();
		cout << "Capasity: " << _capasity << " Tb" << "\n";
		cout << "Rotation speed: " << _rotation_speed << " rpm" << "\n";
		cout << "Buffer size: " << _buffer_size << " Mb" << "\n";
	}

	virtual void ShowFeatures() override
	{
		cout << "HDD: \n";
		ShowHDDFeatures();
	}
};

class RAM : public Component
{
	int _typeOfMemory;
	int _memory_frequency;
public:
	RAM(string model, int _typeOfMemory, int _memory_frequency)
	{
		SetModel(model);
		SetTypeOfMemory(_typeOfMemory);
		SetMemoryFrequency(_memory_frequency);
	}

	void SetTypeOfMemory(int typeOfMemory)
	{
		if (typeOfMemory > 0 && typeOfMemory <= 4)
			_typeOfMemory = typeOfMemory;
	}
	void SetMemoryFrequency(int memory_frequency)
	{
		if (memory_frequency > 0)
			_memory_frequency = memory_frequency;
	}

	int GetTypeOfMemory() { return _typeOfMemory; }
	int GetMemoryFrequency() { return _memory_frequency; }

	void ShowRamFeatures()
	{
		ShowModel();
		cout << "Type of memory: DDR" << _typeOfMemory << "\n";
		cout << "frequency of memory: " << _memory_frequency << " MHc" << "\n";
	}

	virtual void ShowFeatures() override
	{
		cout << "RAM: \n";
		ShowRamFeatures();
	}
};

