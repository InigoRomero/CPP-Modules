#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string.h>

class Brain;

class Brain
{
	public:
		Brain();
		Brain(std::string iq);
		Brain(const Brain&);
		virtual ~Brain();
		Brain &operator=(const Brain& op);
		// Getter - Setter
		void			set_IQ(std::string iq);
		std::string			identify();
		std::string 	get_IQ();

	private:
		std::string _iq;
};

#endif