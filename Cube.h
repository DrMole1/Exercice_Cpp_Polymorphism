#pragma once
// ============================================
// BUT : Gère la classe Cube
// FICHIER : Cube.h
// CLASSE : CCube

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#include <iostream>
#include <sstream>
#include <string>
#include "Figure.h"
#include "Carre.h"

using namespace std;


#pragma once
class CCube : public CCarre {
public:
	CCube(double largeur, double x = 0, double y = 0) : CCarre(largeur, x, y) {}
	~CCube() {}
	double perimetre() { return m_dbllargeur * 4; }
	double volume() { return m_dbllargeur * 3; }
	double aire() { return m_dbllargeur * m_dbllargeur * 6; }
	string description(t_desc type);
	string toString();
};