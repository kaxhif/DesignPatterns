#include "InitPage.h"
#include <iostream>
void InitPage::Start()
{
	//std::cout << "InitPage: Start" << std::endl;
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	this->Stop();
}
void InitPage::Stop()
{
	//std::cout << "InitPage: Stop" << std::endl;
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;

}

void InitPage::End()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	//std::cout << "InitPage: End" << std::endl;
}

void InitPage::Pause()
{
	std::cout << typeid(*this).name() << ": " << __func__ << std::endl;
	//std::cout << "InitPage: Pause" << std::endl;
}
