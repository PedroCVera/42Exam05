#include "Warlock.hpp"

Warlock::~Warlock(void){ 
	std::cout << _name << ": My job here is done!" << std::endl;
}

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name) , _title(title)
{
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

std::string const &Warlock::getName(void) const {
	return _name;
}

std::string const &Warlock::getTitle(void) const {
	return _title;
}

void	Warlock::introduce() const{
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void	Warlock::setTitle(std::string const &title)
{
	_title = title;
}

void	Warlock::learnSpell(ASpell *spell){
	if (_spellBook.find(spell->getName()) == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void	Warlock::forgetSpell(std::string spell)
{
	if (_spellBook.find(spell) != _spellBook.end())
		{
			delete _spellBook[spell];
			_spellBook.erase(spell);
		}
}

void	Warlock::launchSpell(std::string spell, ATarget const &ref)
{
	if (_spellBook.find(spell) != _spellBook.end())
	{
		_spellBook[spell]->launch(ref);
	}
}
