#pragma once
#include <iostream>
#include "ICDStrategy.h"
class ClashDetectionContext
{
public:
	ClashDetectionContext(std::unique_ptr<ICDStrategy> strategy);
	~ClashDetectionContext();
	void SetStrategy(std::unique_ptr<ICDStrategy> strategy);
	void PerformClashDetection(std::string modelName)const;

private:
	std::unique_ptr<ICDStrategy> _strategy;
};

ClashDetectionContext::ClashDetectionContext(std::unique_ptr<ICDStrategy> strategy)
	:_strategy(std::move(strategy))
{
}

ClashDetectionContext::~ClashDetectionContext()
{

}

void ClashDetectionContext::SetStrategy(std::unique_ptr<ICDStrategy> strategy)
{
	_strategy = std::move(strategy);
}

void ClashDetectionContext::PerformClashDetection(std::string modelName)const
{
	if (_strategy)
	{
		std::cout << _strategy->DetectClashes(modelName) << std::endl;
	} 
	else
	{
	}
}