#include "Angle.h"
#include <math.h>

void Angle::setValue(double _deg)
{
	this->deg = _deg;
}

double Angle::getSin()
{
	return sin(this->deg);
}

double Angle::getCos()
{
	return cos(this->deg);
}

double Angle::getTan() 
{
	return tan(this->deg);
}