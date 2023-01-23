#include "ShoeBuilderDirector.h"

void ShoeBuilderDirector::SetBuilder(ShoeBuilder* shBuilder)
{
	shoeBuilder = shBuilder;
}
void ShoeBuilderDirector::MakeSneakerShoes()// ShoeBuilder* shoe)
{
	shoeBuilder->SetShoeName("Super Sneakers");
	shoeBuilder->SetEyeLet(true);
	shoeBuilder->SetOutSole("Soft 2mm drop");
	shoeBuilder->midSole("Fresh foam");
	shoeBuilder->hasCollar(true);
	shoeBuilder->hasUpper(true);
	shoeBuilder->hasTongue(true);
	shoeBuilder->hasLacing(false);
}
void ShoeBuilderDirector::MakeRunningShoes()//ShoeBuilder* shoe)
{
	shoeBuilder->SetShoeName("Awesome Sports Shoes ");
	shoeBuilder->SetEyeLet(true);
	shoeBuilder->SetOutSole("Sturdy 8mm drop");
	shoeBuilder->midSole("Fresh foam");
	shoeBuilder->hasCollar(true);
	shoeBuilder->hasUpper(true);
	shoeBuilder->hasTongue(false);
	shoeBuilder->hasLacing(false);
}
void ShoeBuilderDirector::MakeWalkingShoes()//ShoeBuilder* shoe)
{
	shoeBuilder->SetShoeName("Walking Shoes ");
	shoeBuilder->SetEyeLet(true);
	shoeBuilder->SetOutSole("Soft 5mm drop");
	shoeBuilder->midSole("Fresh foam");
	shoeBuilder->hasCollar(true);
	shoeBuilder->hasUpper(true);
	shoeBuilder->hasTongue(true);
	shoeBuilder->hasLacing(false);
}
