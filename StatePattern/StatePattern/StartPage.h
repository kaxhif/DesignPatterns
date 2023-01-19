#pragma once
#include "IPageSate.h"
class StartPage:
    public IPageState
{
	void Start() override;
	void Stop() override;
	void End() override;
	void Pause() override;
};

