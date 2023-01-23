#pragma once
#include "ShoeBuilder.h"
class RunningShoeBuilder :
    public ShoeBuilder
{
    MyShoe* myshoe;
public:
	RunningShoeBuilder();
	~RunningShoeBuilder();
	MyShoe* GetShoe() override;
	void SetEyeLet() override;
	void SetOutSole() override;
	void midSole() override;
	void hasCollar() override;
	void hasUpper() override;
	void hasTongue() override;
	void hasLacing() override;
};

