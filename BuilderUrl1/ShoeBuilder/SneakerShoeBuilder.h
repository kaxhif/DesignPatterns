#pragma once
#include "ShoeBuilder.h"
class SneakerShoeBuilder :
    public ShoeBuilder
{
	MyShoe* myshoe;
public:
	SneakerShoeBuilder();
	~SneakerShoeBuilder();
	MyShoe* GetShoe() override;
	void SetEyeLet() override;
	void SetOutSole() override;
	void midSole() override;
	void hasCollar() override;
	void hasUpper() override;
	void hasTongue() override;
	void hasLacing() override;
};

