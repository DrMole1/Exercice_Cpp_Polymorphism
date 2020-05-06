// ============================================
// BUT : Gère la classe Carre
// FICHIER : Carre.h
// CLASSE : CCarre

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#include <iostream>
#include <sstream>
#include <string>
#include "Figure.h"

using namespace std;


#pragma once
class CCarre : public CFigure {
	protected:
		double m_dbllargeur;
	public:
		CCarre(double largeur, double x = 0, double y = 0): CFigure(x, y, 0), m_dbllargeur(largeur) {}
		~CCarre() {}
		double perimetre() { return m_dbllargeur * 4; } 
		double volume() { return 0; } // je dois définir la méthode volume() 
		double aire(){ return m_dbllargeur * m_dbllargeur; }
		string description(t_desc type); 
		string toString();
	};