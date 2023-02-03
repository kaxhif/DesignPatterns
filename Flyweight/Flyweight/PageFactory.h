#pragma once
#include <iostream>
#include <unordered_map>
#include "PageFormat.h"
#include "Page.h"

class PageFactory
{
	std::unordered_map<PageType, PageFormat*> pageFormats;
public:
	~PageFactory()
	{
		for (auto pf : pageFormats)
		{
			delete pf.second;
		}
	}

	PageFormat* GetPageFormat(PageType pagetype) 
	{
		if (this->pageFormats.find(pagetype) == this->pageFormats.end())
		{
			//std::cout << "PageFactory: Can't find a page format, creating one..." << std::endl;
			PageFormat* pf = new PageFormat(pagetype);
			this->pageFormats.insert(std::make_pair(pagetype, pf));
		}
		/*else
		{
			std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
		}*/
		return this->pageFormats.at(pagetype);
	}
};

