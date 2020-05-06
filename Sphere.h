// ============================================
// BUT : Gère la classe Sphere
// FICHIER : Sphere.h
// CLASSE : CSphere

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================
#pragma once
#include "Cercle.h"

class CSphere : public CCercle {
public:
	CSphere(double rayon, double x = 0, double y = 0) : CCercle(rayon, x, y) {}
	~CSphere() {}
	double perimetre() { return 0; }
	double volume() { return (4 * PI * m_dblrayon * m_dblrayon * m_dblrayon) / 3; }
	double aire() { return 4 * PI * m_dblrayon * m_dblrayon; }
	string description(t_desc type);
	string toString();
};