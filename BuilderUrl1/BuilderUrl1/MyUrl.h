#pragma once
#include <iostream>
#include <string>

using namespace std;

class MyUrl
{
private:
	string protocol;
	string domain;
	string subdomain;
	string topLevelDomain;
	int port;
	string path;
	string query;
	string parameters;
public:
	MyUrl() = default;
	MyUrl(string _protocol, string _domain, string _topLevelDom);

	string ToString();
	string GetFmtProtocol();
	string GetFmtDomain();
	string GetFmtSubDomain();

	string GetFmtTopLevelDomain();
	string GetFmtPort();
	string GetFmtPath();
	string GetFmtQuery();
	//string GetFmtParameters();
	void SetProtocol(string);
	void SetDomain(string);
	void SetSubDomain(string);

	void SetTopLevelDomain(string);
	void SetPort(int);
	void SetPath(string);
	void SetQuery(string);
	void SetParameters(string);
};

