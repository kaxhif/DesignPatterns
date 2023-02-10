#pragma once
#include <iostream>

class ICDStrategy
{
public:
	virtual ~ICDStrategy() = default;
	virtual std::string DetectClashes(std::string modelName) const = 0;
};

class ClashDetection4DBim
	:public ICDStrategy
{
	std::string DetectClashes(std::string modelName) const override
	{
		std::cout << "Clash Detection Strategy 4DBim used for model:" << modelName << std::endl;
		return "Clash Detection 4DBim";
	}
};

class ClashDetectionSoft
	:public ICDStrategy
{
	std::string DetectClashes(std::string modelName) const override
	{
		//std::string message=
		std::cout << "Clash Detection Soft used for model:" << modelName << std::endl;
		return "Clash Detection Soft";
	}
};

class ClashDetectionHard
	:public ICDStrategy
{
	std::string DetectClashes(std::string modelName) const override
	{
		std::cout << "Clash Detection Hard used for model:" << modelName << std::endl;
		return "Clash Detection Hard";
	}
};