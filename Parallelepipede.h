// ============================================
// BUT : Gère la classe Parallelepipède
// FICHIER : Parallelepipede.h
// CLASSE : CParallelepipede

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#include <iostream>
#include <sstream>
#include <string>
#include "Figure.h"
#include "Rectangle.h"

using namespace std;


#pragma once
class CParallelepipede : public CRectangle {
protected:
	double m_dblhauteur, m_dbldx, m_dbldy;
public:
	CParallelepipede(double largeur, double longueur, double x = 0, double y = 0, double hauteur = 0, double dx = 0, double dy = 0) : CRectangle(largeur, longueur, x, y), m_dblhauteur(hauteur), m_dbldx(dx), m_dbldy(dy) {}
	~CParallelepipede() {}
	double perimetre() { return (m_dbllargeur * 4) + (m_dbllongueur * 4) + (m_dblhauteur * 4); }
	double volume() { return m_dbllargeur * m_dbllongueur * m_dblhauteur; }
	double aire() { return (2 * m_dblhauteur * m_dbllargeur) + (2 * m_dblhauteur * m_dbllongueur) + (2 * m_dbllongueur * m_dbllargeur); }
	string description(t_desc type);
	string toString();
};