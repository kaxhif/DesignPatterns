// Flyweight.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "AChapter.h"

//In a book we've different kind of page formats. Page format is defined by how 
//the header and footer look like. For a chapter in a book, a page format can be of 
//three kinds. start of chapter, normal page, and end of chapter
//Here I am implementing a flyweight pattern covering the format of the page.
//Each page can have either format type and variable page text.
//

int main()
{
	AChapter achapter;
	achapter.AddPage(new Page(PageType::ChapterStart, "Chapter 1: beginning", 1));
	achapter.AddPage(new Page(PageType::NormalPage, "page text-1", 2));
	achapter.AddPage(new Page(PageType::NormalPage, "page text-2", 3));
	achapter.AddPage(new Page(PageType::NormalPage, "page text-3", 4));
	achapter.AddPage(new Page(PageType::NormalPage, "page text-4", 5));
	achapter.AddPage(new Page(PageType::NormalPage, "page text-5", 6));
	achapter.AddPage(new Page(PageType::NormalPage, "Chapter-1: End", 7));
	achapter.Print();

}
