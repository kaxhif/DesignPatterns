#include "StartPage.h"
#include <iostream>
void StartPage::Start()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	this->Stop();
}
void StartPage::Stop()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void StartPage::End()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}

void StartPage::Pause()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
}
