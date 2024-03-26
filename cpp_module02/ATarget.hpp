#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include <string>

# include "ASpell.hpp"

class ASpell;

class ATarget{

	protected:
		std::string _type;

	public:
		ATarget();
		ATarget(ATarget const &copy);
		ATarget &operator=(ATarget const &other);
		virtual ~ATarget();

		ATarget(std::string const &type);
	
		std::string const	&getType(void) const;

		virtual ATarget *clone(void) const = 0;

		void	getHitBySpell(ASpell const &ref) const;
};

#endif