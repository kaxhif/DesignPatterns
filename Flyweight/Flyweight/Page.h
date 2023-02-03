#pragma once
#include <string>
#include <iostream>

enum class PageType
{
	ChapterStart,
	ChapterEnd,
	NormalPage
};

class Page
{
private:
	PageType pageType;
	std::string pageText;
	int pageNo;
public:
	Page(PageType pt, std::string text, int no)
		:pageType(pt), pageText(text), pageNo(no){}
	
	std::string GetPageTypeText()
	{
		if (pageType == PageType::ChapterEnd)
			return "PageType:ChapterEnd";
		if (pageType == PageType::ChapterStart)
			return "PageType:ChapterStart";
		if (pageType == PageType::NormalPage)
			return "PageType:NormalPage";
		return "";
	}

	PageType GetPageType()
	{
		return pageType;
	}

	std::string GetPageText()
	{
		return pageText;
	}

	int GetPageNo()
	{
		return pageNo;
	}

	std::string GetPagePrint()
	{

		std::string pageOutput = this->GetPageTypeText() + " pageText:" + this->GetPageText() + " pageNo:" + std::to_string(this->GetPageNo());
		return pageOutput;
	}
};


//std::ostream& operator<<(std::ostream& outs, Page page)
//{
//	outs << page.GetPageTypeText() << " pageText:" << page.GetPageText() << " pageNo:" << page.GetPageNo() << std::endl;
//	return outs;
//}
