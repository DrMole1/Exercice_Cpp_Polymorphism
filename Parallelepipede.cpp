#include "Parallelepipede.h"

string CParallelepipede::description(t_desc type)
{
	string strDesc;
	if (type == courte)
	{
		strDesc = "Parallelepipede";
	}
	else if (type == longue)
	{
		ostringstream oss;
		strDesc = CFigure::description(type) + " <|-Parallelepipede\n";
		strDesc += "{\n";
		strDesc += "\tx = ";
		oss << m_dblx;
		strDesc += oss.str() + "\n";
		strDesc += "\ty=";
		oss.str("");
		oss << m_dbly;
		strDesc += oss.str() + "\n";
		strDesc += "\tz =  ";
		oss.str("");
		oss << m_dblz;
		strDesc += oss.str() + "\n";
		strDesc += "\tlargeur = ";
		oss.str("");
		oss << m_dbllargeur;
		strDesc += oss.str() + "\n";
		strDesc += "\tlongueur = ";
		oss.str("");
		oss << m_dbllongueur;
		strDesc += oss.str() + "\n";
		strDesc += "\thauteur = ";
		oss.str("");
		oss << m_dblhauteur;
		strDesc += oss.str() + "\n";
		strDesc += "\tdx = ";
		oss.str("");
		oss << m_dbldx;
		strDesc += oss.str() + "\n";
		strDesc += "\tdy = ";
		oss.str("");
		oss << m_dbldy;
		strDesc += oss.str() + "\n";
		strDesc += "}\n";
	}
	else
	{
		strDesc = "";
	}
	return strDesc;
}

string CParallelepipede::toString()
{
	ostringstream oss;
	oss << m_dbllargeur << " " << m_dbllongueur << " " << m_dblhauteur << " " << m_dbldx << " " << m_dbldy;
	return CFigure::toString() + " " + oss.str();
}