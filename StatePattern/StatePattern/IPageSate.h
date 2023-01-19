#pragma once
struct IPageState
{
	virtual void Start() = 0;
	virtual void Stop() = 0;
	virtual void End() = 0;
	virtual void Pause() = 0;
};