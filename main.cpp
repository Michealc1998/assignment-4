
/**
 *  Micheál Carroll
 *  C00218621
 *  Ex_4 Electrical resistance of a wire
 */

//Preproceesor derectives
#include <iostream>
#include <math.h>
#define PI 3.12159265359
using namespace std;

//Variable declarations
double resistance(double rad, double len, double rho);

//Main () function
int main(void)
{
    //Variable declarations
    double r, l, resistivity, res;

    //Project title
    cout << "Electrical Resistance of a Wire" << endl;

    //Do - While loop
    do
    {
        //Read in the values
        cout << "Enter a radius value greater than 0: ";
        cin >> r;
    }
    while (r <= 0);

    do
    {
        cout << "Enter a lenght value greater than 0: ";
        cin >> l;
    }
    while ( l<= 0);

    do
    {
        cout << "Enter a resistivity value greater than 0: ";
        cin >> resistivity;
    }
    while (resistivity <= 0);

    //Formula for resativity
    res = resistance(r,l,resistivity);

    cout << "\nElectrical resistance: " << res << " Ohms" << endl;

    return 0;
}

//New function
double resistance(double rad, double len, double rho)
{
    double area;
    double res;

    //Formulas for calculating area and resistance
    area = PI *rad * rad;
    res= rho*(len/area);

    return res ;
}
