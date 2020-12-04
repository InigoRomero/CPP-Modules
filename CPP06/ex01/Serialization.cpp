# include "Serialization.hpp"

//reinterpret_cast Permite que el puntero se trate como un tipo entero. El resultado se cambia a bits 
//y se compara mediante XOR consigo mismo para producir un índice único (con un alto grado de probabilidad).
// El índice se trunca mediante una conversión de estilo de C al tipo de valor devuelto de la función.

//Este tipo de conversión admite, por ejemplo, conversiones entre punteros no compatibles entre sí. Entiéndase 
//que este tipo de conversión hay que utilizarla con muchísimo cuidado ya que puede tener efectos devastadores 
//sobre nuestro código.
void *serialize(void)
{
    char *raw = new char[20];
	static std::string alphabet = "0123456789" \
		"abcdefghijklmopqrstuvxyz" \
		"ABCDEFGHIJKLMOPQRSTUVXYZ";
    
    for (int i = 0; i < 8; i++)
		raw[i] = alphabet[rand() % alphabet.length()];
	*reinterpret_cast<int*>(raw + 8) = rand() % 424242;
	for (int i = 0; i < 8; i++)
		raw[i + 12] = alphabet[rand() % alphabet.length()];
	return (raw);
}

Data *deserialize(void *raw)
{
	Data *d = new Data;

	d->s1 = std::string(static_cast<char*>(raw), 8);
	d->n = *reinterpret_cast<int*>(static_cast<char*>(raw) + 8);
	d->s2 = std::string(static_cast<char*>(raw) + 12, 8);
	return (d);
}