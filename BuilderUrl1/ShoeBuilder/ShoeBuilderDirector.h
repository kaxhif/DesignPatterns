#pragma once
#include "ShoeBuilder.h"

class ShoeBuilderDirector
{
	ShoeBuilder* shoeBuilder;
public:
	void SetBuilder(ShoeBuilder*);
	void MakeSneakerShoes();// ShoeBuilder*);
	void MakeRunningShoes();// ShoeBuilder*);
	void MakeWalkingShoes();// ShoeBuilder*);
};

