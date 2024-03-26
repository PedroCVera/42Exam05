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
	_SpellBook.learnSpell(spell);
}

void	Warlock::forgetSpell(std::string spell)
{
	_SpellBook.forgetSpell(spell);
}

void	Warlock::launchSpell(std::string spell, ATarget const &ref)
{
	if (_SpellBook.createSpell(spell))
		(_SpellBook.createSpell(spell))->launch(ref);
}
