// Prototype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "MyComplexObject.h"

int main()
{
    MyComplexObject<int>* myco = new MyComplexObject<int>();
    myco->SetData_1(10);
    myco->SetData_2(5);
    myco->SetText("hello!");
    myco->AddValToVec(8);
    myco->AddValToVec(12);
    myco->AddValToVec(15);
    myco->AddValToVec(17);
    MyComplexObject<int>* mycoClone = myco->clone();
    std::cout << "First complex object:" << std::endl;
    myco->Print();
    std::cout << "Cloned complex object:" << std::endl;
    mycoClone->Print();
    delete myco;
    delete mycoClone;
}
