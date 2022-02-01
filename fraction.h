#ifndef FRACTION_H
#define FRACTION_H
#include <ostream>

class Fraction
{
protected:
    int Numerator;
    int Denominator;

public:
    Fraction();
    Fraction(int numerator);
    Fraction(int numerator , int denominator);
    void Set_Numerator( int numerator );
    void Set_Denominator( int denominator );
    int Get_Numerator() const ;
    int Get_Denominator() const;
};

Fraction operator+(Fraction const& a , Fraction const&b);
Fraction operator*(Fraction const& a , Fraction const&b);
bool operator<(Fraction const& a , Fraction const&b);
bool operator>(Fraction const& a , Fraction const&b);
std::ostream& operator<<(std::ostream& flux , Fraction const& fraction);

#endif // FRACTION_H
