#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"
# include "ASpell.hpp"
# include <map>
# include "SpellBook.hpp"


class ASpell;
class ATarget;


class Warlock{
	private:
		std::string _name;
		std::string _title;
		std::map <std::string, ASpell*> _spellBook;
		SpellBook _SpellBook;

	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const &getName(void) const;
		std::string const &getTitle(void) const;

		void	introduce() const;
		void	setTitle(std::string const &title);

		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string spell);
		void	launchSpell(std::string spell, ATarget const &ref);

};

#endif