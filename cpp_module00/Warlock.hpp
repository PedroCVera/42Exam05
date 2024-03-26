#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock{
	private:
		std::string _name;
		std::string _title;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock(void);

		std::string const &getName(void) const;
		std::string const &getTitle(void) const;

		void	introduce() const;
		void	setTitle(std::string const &title);

};

#endif