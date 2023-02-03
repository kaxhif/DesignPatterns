#pragma once
#include <iostream>
#include <vector>
#include "Page.h"
#include "PageFactory.h"

class AChapter
{
	std::vector<Page*> pages;
	PageFactory pageFactory;

public:
	void AddPage(Page* page)
	{
		pages.push_back(page);
	}

	Page* GetPage(size_t pageNo)
	{
		return pages[pageNo];
	}

	void Print()
	{

		for (auto p :pages)
		{
			std::cout << p->GetPageText() << "  "<< pageFactory.GetPageFormat(p->GetPageType())->GetPageFormatText()<< std::endl;
		}
	}
	~AChapter()
	{
		for (auto p : pages)
		{
			delete p;
		}
	}
};
