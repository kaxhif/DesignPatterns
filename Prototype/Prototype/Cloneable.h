#pragma once
struct ICloneable
{
	virtual ICloneable* clone()=0;
};