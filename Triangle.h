// ============================================
// BUT : Gère la classe Triangle
// FICHIER : Triangle.h
// CLASSE : CTriangle

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#include <iostream>
#include <sstream>
#include <string>
#include "Figure.h"

using namespace std;

#pragma once
class CTriangle : public CFigure { 
	protected:
		double m_dblbase, m_dblhauteur;
	public:
		CTriangle(double base, double hauteur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dblbase(base), m_dblhauteur(hauteur) {}
		~CTriangle() {}
		double perimetre() { return sqrt(m_dblbase * m_dblbase + m_dblhauteur * m_dblhauteur) + m_dblbase + m_dblhauteur; }
		double volume() { return 0; } // je dois définir la méthode volume() 
		double aire() { return m_dblbase * m_dblhauteur / 2; }
		string description(t_desc type);
		string toString(); 
	};
