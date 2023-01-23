// BuilderUrl1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "UrlBuilder.h"

/* Reducing the constructor parameters and building URL in parts */

int main()
{
    std::cout << "Hello World!\n";
    UrlBuilder* urlBuilder = new UrlBuilder();
    urlBuilder->SetProtocol("http");
    urlBuilder->SetSubDomain("video");
    urlBuilder->SetDomain("google");
    urlBuilder->SetTopLevelDomain("com");
    urlBuilder->SetPort(80);
    urlBuilder->SetPath("videoplay");
    urlBuilder->SetQuery("docid=12345");
    
    MyUrl* myUrl = urlBuilder->GetUrl();
    std::cout << "My URL:" << myUrl->ToString() << std::endl;
    delete urlBuilder;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
