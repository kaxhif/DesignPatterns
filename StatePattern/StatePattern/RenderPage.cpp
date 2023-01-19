#include "RenderPage.h"
#include <iostream>
void RenderPage::Start()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	this->Stop();
}
void RenderPage::Stop()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void RenderPage::End()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void RenderPage::Pause()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}
