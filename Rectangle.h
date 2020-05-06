// ============================================
// BUT : Gère la classe Rectangle
// FICHIER : Rectangle.h
// CLASSE : CRectangle

// DATE : 06/05/2020
// AUTEUR : Bastien
// ============================================

#include <iostream>
#include <sstream>
#include <string>
#include "Figure.h"

using namespace std;


#pragma once
class CRectangle : public CFigure {
protected:
	double m_dbllargeur, m_dbllongueur;
public:
	CRectangle(double largeur, double longueur, double x = 0, double y = 0) : CFigure(x, y, 0), m_dbllargeur(largeur), m_dbllongueur(longueur) {}
	~CRectangle() {}
	double perimetre() { return (m_dbllargeur + m_dbllongueur) * 2; }
	double volume() { return 0; } // je dois définir la méthode volume() 
	double aire() { return m_dbllargeur * m_dbllongueur; }
	string description(t_desc type);
	string toString();
};