#pragma once
#include "MyUrl.h"
class UrlBuilder
{
private: 
	MyUrl* myUrl;
public:
	UrlBuilder();
	~UrlBuilder();
	MyUrl* GetUrl();
	UrlBuilder* SetProtocol(string );
	UrlBuilder* SetDomain(string);
	UrlBuilder* SetSubDomain(string);

	UrlBuilder* SetTopLevelDomain(string);
	UrlBuilder* SetPort(int );
	UrlBuilder* SetPath(string);
	UrlBuilder* SetQuery(string);
};

