#pragma once
#include "MyShoe.h"
class ShoeBuilder
{
private:
	//MyShoe* myShoe;

public:
	virtual MyShoe* GetShoe() = 0;
	virtual void SetShoeName(std::string) = 0;
	virtual void SetEyeLet(bool) = 0;
	virtual void SetOutSole(std::string) = 0;
	virtual void midSole(std::string) = 0;
	virtual void hasCollar(bool) = 0;
	virtual void hasUpper(bool) = 0;
	virtual void hasTongue(bool) = 0;
	virtual void hasLacing(bool) = 0;
};

class ConcreteShoeBuilder : public ShoeBuilder
{
private:
	MyShoe* myShoe;

public:
	ConcreteShoeBuilder();
	~ConcreteShoeBuilder();
	void Reset();
	void SetShoeName(std::string) override;
	MyShoe* GetShoe() override;
	void SetEyeLet(bool ) override;
	void SetOutSole(std::string) override;
	void midSole(std::string) override;
	void hasCollar(bool) override;
	void hasUpper(bool) override;
	void hasTongue(bool) override;
	void hasLacing(bool) override;
};

