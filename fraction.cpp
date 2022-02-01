#include "fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction() : Numerator(0) , Denominator (1)
{                                                     }

Fraction::Fraction( int numerator) : Numerator(numerator) , Denominator (1)
{                                                                           }


Fraction::Fraction(int numerator , int denominator) : Numerator(numerator) // Liste d'initialisation ( dispo pour les constructeurs
{
    Set_Denominator(denominator);
}


void Fraction :: Set_Denominator( int denominator )
{
    if (denominator>0)
        this->Denominator=denominator;
    else
    {
        cout<<"Le denominateur ne peut pas etre initialise a 0";
        this->Denominator=1;
    }
}


void Fraction :: Set_Numerator(int numerator)
{
    this->Numerator=numerator;
}


int Fraction ::Get_Denominator() const
{
    return this->Denominator;
}


int Fraction :: Get_Numerator() const
{
    return this->Numerator;
}

Fraction operator+(Fraction const& a , Fraction const&b)
{
    Fraction result((a.Get_Numerator()*b.Get_Denominator()+b.Get_Numerator()*a.Get_Denominator()),(a.Get_Denominator()*b.Get_Denominator()));
    return result;
}

Fraction operator*(Fraction const& a , Fraction const&b)
{
    Fraction result((a.Get_Numerator()*b.Get_Numerator()),(a.Get_Denominator()*b.Get_Denominator()));
    return result;
}

bool operator<(Fraction const& a , Fraction const&b)
{

    return (((double)a.Get_Numerator()/a.Get_Denominator())<((double)b.Get_Numerator()/b.Get_Denominator()));
}

bool operator>(Fraction const& a , Fraction const&b)
{
    return (((double)a.Get_Numerator()/a.Get_Denominator())>((double)b.Get_Numerator()/b.Get_Denominator()));
}

ostream& operator<<(ostream& flux , Fraction const& fraction)
{
    flux<<fraction.Get_Numerator()<<"/"<<fraction.Get_Denominator();
    return flux;
}


