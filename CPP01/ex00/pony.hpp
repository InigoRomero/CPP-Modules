#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony;

class Pony
{
	public:
		Pony();
		Pony(std::string name, std::string color,
			std::string size_of_horn, std::string weight,
			std::string favorite_anime);
		Pony(const Pony&);
		virtual ~Pony();
		Pony &operator=(const Pony& op);
		// Getter - Setter
		void			set_Name(std::string name);
		void 			set_Color(std::string color);
		void 			set_Size_Of_Horn(std::string size_of_horn);
		void 			set_Weight(std::string weight);
        void 			set_Favorite_Anime(std::string _favorite_anime);
		void 			show();
		std::string 	get_Name();
		std::string 	get_Color();
		std::string 	get_Size_Of_Horn();
		std::string 	get_Weight();
        std::string 	get_Favorite_Anime();

	private:
		std::string _name;
		std::string _color;
		std::string _size_of_horn;
		std::string _weight;
        std::string _favorite_anime;
};

#endif