#pragma once
#include <string>
#include "Page.h"
enum class PageNoLocation
{
	BottomCenter,
	BottomRight,
	BottomLeft,
	None
};

class PageFormat
{
public:
	PageFormat()
		: header(""), footer(""), pageNumberLocation(PageNoLocation::BottomCenter)
	{

	}
	~PageFormat() {}
	PageFormat(PageType pageType)
	{
		if (pageType == PageType::ChapterStart)
		{
			SetHeader("ChapterHeader");
			SetPageNoLocation(PageNoLocation::None);
		}

		else if (pageType == PageType::ChapterEnd)
		{
			SetFooter("End Chapter footer.");
			SetPageNoLocation(PageNoLocation::BottomLeft);
		}
		else if (pageType == PageType::NormalPage)
		{
			SetHeader("normal header");
			SetFooter("normal footer");
			SetPageNoLocation(PageNoLocation::BottomCenter);
		}

	}

	void SetHeader(std::string header)
	{
		this->header = header;
	}

	const std::string& GetHeader() const
	{
		return this->header;
	}

	void SetFooter(std::string footer)
	{
		this->footer = footer;
	}

	const std::string& GetFooter() const
	{
		return this->footer;
	}

	void SetPageNoLocation(PageNoLocation pnoLoc)
	{
		this->pageNumberLocation = pnoLoc;
	}

	PageNoLocation GetPageNoLocation()
	{
		return this->pageNumberLocation;
	}

	std::string GetPageNoLocationText()
	{
		std::string pageFormatText = "";
		if (GetPageNoLocation() == PageNoLocation::BottomCenter)
		{
			pageFormatText = "Bottom Center";
		}
		else if (GetPageNoLocation() == PageNoLocation::BottomLeft)
		{
			pageFormatText = "Bottom Left";
		}
		else if (GetPageNoLocation() == PageNoLocation::BottomRight)
		{
			pageFormatText = "Bottom Right";
		}
		return pageFormatText;
	}

	//std::ostream& operator<<(std::ostream& outs, const PageFormat& pf)
//{
//	outs << "Header:" << pf.GetHeader() << " footer:" << pf.GetFooter();
//	return outs;
//}

	std::string GetPageFormatText()
	{
		std::string pageFormatText;
		pageFormatText = "Header:" + this->GetHeader() + ", Footer:" + this->GetFooter() + 
			", Page No Location:" + this->GetPageNoLocationText();


		return pageFormatText;
	}


private:
	std::string header;
	std::string footer;
	PageNoLocation pageNumberLocation = PageNoLocation::BottomCenter;
};

