#include "APage.h"
#include <iostream>

APage::APage() 
{
	setState(new InitPage());
}

void APage::setState(IPageState* newState)
{
	std::cout << "APage Context: set state to " << typeid(*newState).name() << ".\n";
	if (this->state != nullptr)
		delete this->state;
	this->state = newState;
	//this->state_->set_context(this); 
}

void APage::Process()
{
	state->Start();
}

APage::~APage() 
{
	if (this->state != nullptr)
		delete this->state;
}
