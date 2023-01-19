#pragma once

#include "IPageSate.h"
#include "InitPage.h"

class APage
{
	private:
		IPageState* state;
	public:
		APage();
		~APage();
		void setState(IPageState* newState);

		void Process();
};

