#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(ASpell const &copy)
{
	_name = copy._name;
	_effects = copy._effects;
}

ASpell &ASpell::operator=(ASpell const &copy)
{
	_name = copy._name;
	_effects = copy._effects;
	return *this;
}

ASpell::~ASpell(){}

ASpell::ASpell(std::string const &name, std::string const &effects) : _name(name) , _effects(effects)
{

}

std::string const &ASpell::getName(void) const{ return _name; }

std::string const &ASpell::getEffects(void) const { return _effects; }

void	ASpell::launch(ATarget const &target) const
{
	target.getHitBySpell(*this);
}