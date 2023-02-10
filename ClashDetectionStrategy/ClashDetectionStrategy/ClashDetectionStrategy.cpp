// ClashDetectionStrategy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ICDStrategy.h"
#include "ClashDetectionContext.h"

void clientCode()
{
	ClashDetectionContext context(std::make_unique<ClashDetection4DBim>());
	std::cout << "Client: Strategy is set to 4D BIM." << std::endl;
	context.PerformClashDetection("Model1");
	std::cout << std::endl;
	std::cout << "Client: Strategy is set to soft clash detection." << std::endl;
	context.SetStrategy(std::make_unique<ClashDetectionSoft>());
	context.PerformClashDetection("Model1");
	std::cout << std::endl;
	std::cout << "Client: Strategy is set to hard clash detection." << std::endl;
	context.SetStrategy(std::make_unique<ClashDetectionHard>());
	context.PerformClashDetection("Model1");
}

int main()
{
	clientCode();
}
