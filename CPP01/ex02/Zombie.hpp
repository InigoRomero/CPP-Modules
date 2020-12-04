#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie;

class Zombie
{
	public:
		Zombie();
		Zombie(std::string name, std::string type);
		Zombie(const Zombie&);
		virtual ~Zombie();
		Zombie &operator=(const Zombie& op);
		// Getter - Setter
		void			set_Name(std::string name);
		void 			set_Type(std::string type);
		void 			announce();
		std::string 	get_Name();
		std::string 	get_Type();

	private:
		std::string _name;
		std::string _type;
};

#endif