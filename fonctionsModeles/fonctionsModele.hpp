#include <string>

using namespace  std;

template<typename TYPE>
const TYPE& TrouverMax(const TYPE _tableau[], const unsigned int _nbElements)
{
	/*TYPE valeur = TYPE();
	TYPE valeurMax = TYPE();

	for (unsigned int i = 0; i < _nbElements; i++)
	{
		valeur = _tableau[i];

		if (valeur > valeurMax)
		{
			valeurMax = valeur;
		}

	}*/
	
	//code prof
	unsigned int indexMax = 0;

	for (unsigned int i = 0; i < _nbElements; i++)
	{
		if (_tableau[i] > _tableau[indexMax])
		{
			indexMax = i;
		}
	}
	return _tableau[indexMax];
}

template <typename TYPE>
TYPE CalculerSomme(const TYPE _tableau[], const unsigned int _nbElements)
{
	TYPE somme = TYPE();

	for (unsigned int i = 0; i < _nbElements; i++)
	{
		somme += _tableau[i];
	}

	return somme;
} 

template <typename TYPE>
unsigned int CompterElement(const TYPE& _element,const  TYPE _tableau[], const unsigned _nbElements)
{
	unsigned int compteur = 0;

	for (unsigned int i = 0; i < _nbElements; i++)
	{
		if (_tableau[i] == _element)
		{
			compteur++;
		}
	}

	return compteur;
}