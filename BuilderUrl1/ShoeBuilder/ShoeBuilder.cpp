#include "ShoeBuilder.h"

ConcreteShoeBuilder::ConcreteShoeBuilder()
{
	this->Reset();
}

ConcreteShoeBuilder::~ConcreteShoeBuilder()
{
	if (myShoe != nullptr)delete myShoe;
}

void ConcreteShoeBuilder::Reset()
{
	if (myShoe != nullptr)delete myShoe;
	myShoe = new MyShoe();
}

void ConcreteShoeBuilder::SetShoeName(std::string shoeName)
{
	this->myShoe->showName = shoeName;
}

MyShoe* ConcreteShoeBuilder::GetShoe()
{
	return myShoe;
}

void ConcreteShoeBuilder::SetEyeLet(bool eyelet)
{
	myShoe->hasEyeLet = eyelet;
}

void ConcreteShoeBuilder::SetOutSole(std::string outSole)
{
	myShoe->outSole = outSole;
}

void ConcreteShoeBuilder::midSole(std::string midSole)
{
	myShoe->midSole = midSole;
}

void ConcreteShoeBuilder::hasCollar(bool collar)
{
	myShoe->hasCollar = collar;
}

void ConcreteShoeBuilder::hasUpper(bool upper)
{
	myShoe->hasUpper = upper;
}

void ConcreteShoeBuilder::hasTongue(bool tongue)
{
	myShoe->hasTongue = tongue;
}

void ConcreteShoeBuilder::hasLacing(bool lacing)
{
	myShoe->hasLacing = lacing;
}
