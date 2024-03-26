#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){};

TargetGenerator::~TargetGenerator(){};

void	TargetGenerator::learnTargetType(ATarget *target){
	if (_targets.find(target->getType()) == _targets.end())
		_targets[target->getType()] = target->clone();
}

void	TargetGenerator::forgetTargetType(std::string const &target)
{
	if (_targets.find(target) != _targets.end())
	{
		delete _targets[target];
		_targets.erase(target);
	}
}

ATarget	*TargetGenerator::createTarget(std::string const &target)
{
	if (_targets.find(target) != _targets.end())
		return (_targets[target]);
	return NULL;
}