// ============================================
// BUT : Gère la classe Cercle
// FICHIER : Cercle.h
// CLASSE : CCercle

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#pragma once
#include "Figure.h"
const double PI = 3.14;

class CCercle : public CFigure {
protected:
	double m_dblrayon;
public:
	CCercle(double rayon, double x = 0, double y = 0) : CFigure(x, y, 0), m_dblrayon(rayon) {}
	~CCercle() {}
	double perimetre() { return 2 * m_dblrayon * PI; }
	double volume() { return 0; } // je dois définir la méthode volume() 
	double aire() { return m_dblrayon * m_dblrayon * PI; }
	string description(t_desc type);
	string toString();
};