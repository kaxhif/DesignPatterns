// StatePattern.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "StartPage.h"
#include "LoadPage.h"
#include "RenderPage.h"
//Context is Page
// states would be different phases of a page is loaded in a browser
// Start, Init, Load, Render
// Methods for each state: Start, Stop, Pause
#include "APage.h"

int main()
{
	APage* apage = new APage();
	apage->Process();
	apage->setState(new StartPage());	//next state
	apage->Process();
	apage->setState(new LoadPage());	//next state
	apage->Process();
	apage->setState(new RenderPage());	//next state
	apage->Process();
	delete apage;
}
