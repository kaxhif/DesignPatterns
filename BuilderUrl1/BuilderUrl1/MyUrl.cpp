#include "MyUrl.h"

MyUrl::MyUrl(string _protocol, string _domain, string _topLevelDom)
{
	this->protocol = _protocol;
	this->domain = _domain;
	this->topLevelDomain = _topLevelDom;
	subdomain = "";
	port = 0;
	path = "";
	query = "";
	parameters = "";
}

string MyUrl::ToString()
{
	return  this->GetFmtProtocol() + this->GetFmtSubDomain() +
		GetFmtDomain() + GetFmtTopLevelDomain() + GetFmtPort() + GetFmtPath() + GetFmtQuery();
}

string MyUrl::GetFmtProtocol()
{
	return this->protocol == "" ? "" : this->protocol + "://";
}
string MyUrl::GetFmtDomain()
{
	return this->domain == "" ? "" : this->domain + ".";
}

string MyUrl::GetFmtSubDomain()
{
	return this->subdomain == "" ? "" : this->subdomain + ".";
}

string MyUrl::GetFmtTopLevelDomain()
{
	return this->topLevelDomain == "" ? "" : this->topLevelDomain;// +".";
}

string MyUrl::GetFmtPort()
{
	return this->port < 0 ? "" : ":" + std::to_string(this->port);
}

string MyUrl::GetFmtPath()
{
	return this->path == "" ? "" : "/" + this->path;
}

string MyUrl::GetFmtQuery()
{
	string retVal = "";
	if (this->query != "" && this->parameters != "")
		retVal = this->query + "=" + this->parameters;
	return retVal;
}

void MyUrl::SetProtocol(string _protocol)
{
	this->protocol = _protocol;
}

void MyUrl::SetDomain(string _domain)
{
	this->domain = _domain;
}

void MyUrl::SetSubDomain(string _subDomain)
{
	this->subdomain = _subDomain;
}

void MyUrl::SetTopLevelDomain(string _topLevelDomain)
{
	this->topLevelDomain = _topLevelDomain;
}

void MyUrl::SetPort(int _port)
{
	this->port = _port;
}

void MyUrl::SetPath(string _path)
{
	this->path = _path;
}

void MyUrl::SetQuery(string _query)
{
	this->query = _query;
}

void MyUrl::SetParameters(string _param)
{
	this->parameters = _param;
}