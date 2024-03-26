#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

# include <iostream>
# include <string>
# include "ATarget.hpp"
# include <map>

class ATarget;

class TargetGenerator{
	private:
		std::map<std::string, ATarget *> _targets;
	
	public:
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget  *target);
		void forgetTargetType(std::string const & target);
		ATarget* createTarget(std::string const &target);
};

#endif