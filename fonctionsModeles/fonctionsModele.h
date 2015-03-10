#pragma once
#include <string>

using namespace std;

template<typename TYPE>
const TYPE& TrouverMax(const TYPE _tableau[],const unsigned int _nbElements);

template<typename TYPE>
TYPE CalculerSomme(const TYPE _tableau[], const unsigned int _nbElements);

template<typename TYPE>
unsigned int CompterElement(const TYPE& _element, const TYPE _tableau[], const unsigned int _nbElements);

#include "fonctionsModele.hpp"
