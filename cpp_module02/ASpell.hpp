#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

# include "ATarget.hpp"

class ATarget;

class ASpell{
	protected:
		std::string _name;
		std::string _effects;

	public:
		ASpell();
		ASpell(ASpell const &copy);
		ASpell &operator=(ASpell const &other);
		virtual ~ASpell();

		ASpell(std::string const &name, std::string const &effects);

		std::string const	&getName(void) const;
		std::string const	&getEffects(void) const;

		virtual ASpell *clone(void) const = 0;

		void	launch(ATarget const &target) const;
};	

#endif