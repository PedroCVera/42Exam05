#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(ATarget const &copy)
{
	_type = copy._type;
}

ATarget &ATarget::operator=(ATarget const &copy)
{
	_type = copy._type;
	return *this;
}

ATarget::~ATarget(){}

ATarget::ATarget(std::string const &type) : _type(type)
{

}

std::string const &ATarget::getType(void) const{ return _type; }

void ATarget::getHitBySpell(ASpell const &ref) const
{
	std::cout << _type << " has been " << ref.getEffects() << "!" << std::endl;
}