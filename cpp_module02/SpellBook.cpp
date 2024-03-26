#include "SpellBook.hpp"

SpellBook::SpellBook(){};

SpellBook::~SpellBook(){};

void	SpellBook::learnSpell(ASpell *spell){
	if (_spells.find(spell->getName()) == _spells.end())
		_spells[spell->getName()] = spell->clone();
}

void	SpellBook::forgetSpell(std::string const &spell)
{
	if (_spells.find(spell) != _spells.end())
	{
		delete _spells[spell];
		_spells.erase(spell);
	}
}

ASpell	*SpellBook::createSpell(std::string const &spell)
{
	if (_spells.find(spell) != _spells.end())
		return (_spells[spell]);
	return NULL;
}