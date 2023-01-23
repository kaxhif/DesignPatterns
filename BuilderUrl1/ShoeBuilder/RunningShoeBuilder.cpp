#include "RunningShoeBuilder.h"

RunningShoeBuilder::RunningShoeBuilder()
{
	myshoe = new MyShoe;
}

RunningShoeBuilder::~RunningShoeBuilder()
{
	if (myshoe != nullptr)
		delete myshoe;
}

MyShoe* RunningShoeBuilder::GetShoe()
{
	return myshoe;
}

void RunningShoeBuilder::SetEyeLet()
{
	this->myshoe->hasEyeLet = true;
}

void RunningShoeBuilder::SetOutSole()
{
	this->myshoe->outSole = "Vibram";
}

void RunningShoeBuilder::midSole()
{
	this->myshoe->midSole = "Fresh Foam";
}

void RunningShoeBuilder::hasCollar()
{
	this->myshoe->hasCollar = true;
}

void RunningShoeBuilder::hasUpper()
{
	this->myshoe->hasUpper = true;
}

void RunningShoeBuilder::hasTongue()
{
	this->myshoe->hasTongue = true;
}

void RunningShoeBuilder::hasLacing()
{
	this->myshoe->hasLacing = true;
}