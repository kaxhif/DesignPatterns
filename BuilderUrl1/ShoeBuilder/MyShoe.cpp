#include "MyShoe.h"
MyShoe::MyShoe()/*std::string _shoeName)
	: showName(_shoeName)*/
{
	showName = "";
	hasEyeLet = false;;
	outSole = "";
	midSole = "";
	hasCollar = false;
	hasUpper = false;
	hasTongue = false;
	hasLacing = false;
}

std::string MyShoe::MakeShoe()
{
	std::string shoe;
	shoe = showName;
	if (midSole != "")
		shoe += " with midsole " + midSole + ",";
	if (outSole != "")
		shoe += " with outsole " + outSole + ",";
	if (hasCollar)
		shoe += " has collar,";
	if (hasUpper)
		shoe += " has upper,";
	if (hasTongue)
		shoe += " has tongue,";
	if (hasLacing)
		shoe += " has lacing";

	return shoe;
}