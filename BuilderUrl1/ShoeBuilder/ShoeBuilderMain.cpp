// ShoeBuilder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "ShoeBuilder.h"
#include "ShoeBuilderDirector.h"

//In this implementation, we are building different kind of shoes using the Builder pattern.
//The ShoeBuilderDirector have some pre-configured shoe configurations that it can build 
//based on client's requests
//
int main()
{
    std::cout << "Hello World!\n";
    ShoeBuilder* runningShoe = new ConcreteShoeBuilder();
    ShoeBuilderDirector* shoeBuilderDirector = new ShoeBuilderDirector();
    shoeBuilderDirector->SetBuilder(runningShoe);
    shoeBuilderDirector->MakeSneakerShoes();
    std::cout << runningShoe->GetShoe()->MakeShoe() << std::endl;
}
