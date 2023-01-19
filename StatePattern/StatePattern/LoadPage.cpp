#include "LoadPage.h"
#include <iostream>
void LoadPage::Start()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	this->Stop();
}
void LoadPage::Stop()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void LoadPage::End()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void LoadPage::Pause()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}
