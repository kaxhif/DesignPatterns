#include "SneakerShoeBuilder.h"
SneakerShoeBuilder::SneakerShoeBuilder()
{
	myshoe = new MyShoe;
}

SneakerShoeBuilder::~SneakerShoeBuilder()
{
	if (myshoe != nullptr)
		delete myshoe;
}

MyShoe* SneakerShoeBuilder::GetShoe()
{
	return myshoe;
}

void SneakerShoeBuilder::SetEyeLet()
{
	this->myshoe->hasEyeLet = true;
}

void SneakerShoeBuilder::SetOutSole()
{
	this->myshoe->outSole = "Rubber";
}

void SneakerShoeBuilder::midSole()
{
	this->myshoe->midSole = "Soft rubber";
}

void SneakerShoeBuilder::hasCollar()
{
	this->myshoe->hasCollar = true;
}

void SneakerShoeBuilder::hasUpper()
{
	this->myshoe->hasUpper = true;
}

void SneakerShoeBuilder::hasTongue()
{
	this->myshoe->hasTongue = true;
}

void SneakerShoeBuilder::hasLacing()
{
	this->myshoe->hasLacing = true;
}
