#include "UrlBuilder.h"

UrlBuilder::UrlBuilder()
{
	myUrl = new MyUrl();
}

UrlBuilder::~UrlBuilder()
{
	if (myUrl)
	{
		delete myUrl;
	}
}


MyUrl* UrlBuilder::GetUrl()
{
	return myUrl;
}

//url: http://video.google.com:80/videoplay?docid=12345
// https://medium.com/@joseph.pyram/9-parts-of-a-url-that-you-should-know-89fea8e11713
//protocol: http
UrlBuilder* UrlBuilder::SetProtocol(string _protocol)
{
	this->myUrl->SetProtocol(_protocol);
	return this;
}

//domain: google
UrlBuilder* UrlBuilder::SetDomain(string _domain)
{
	this->myUrl->SetDomain(_domain);
	return this;
}

//subdomain: video, 
//or www in most of the cases
UrlBuilder* UrlBuilder::SetSubDomain(string _subDom)
{
	this->myUrl->SetSubDomain(_subDom);
	return this;
}

//top Level Domain: com
UrlBuilder* UrlBuilder::SetTopLevelDomain(string _topLevelDom)
{
	this->myUrl->SetTopLevelDomain(_topLevelDom);
	return this;
}

//port:80
UrlBuilder* UrlBuilder::SetPort(int _port)
{
	this->myUrl->SetPort(_port);
	return this;
}

//path: videoplay
UrlBuilder* UrlBuilder::SetPath(string _path)
{
	this->myUrl->SetPath(_path);
	return this;
}

//query:docid=12345
//[not separately covered in this implementation parameter:12345]
UrlBuilder* UrlBuilder::SetQuery(string _query)
{
	this->myUrl->SetQuery(_query);
	return this;
}
