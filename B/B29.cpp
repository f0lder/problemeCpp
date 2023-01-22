#include <iostream>
using namespace std;
typedef struct 
 { 
 double preal; 
 double pimag;  
 } complex;

void citeste_c(complex &c){
    cout << "Partea reala: ";
    cin >> c.preal;
    cout << "Partea imaginara: ";
    cin >> c.pimag;
}
complex sum_c(complex a,complex b){
    complex rez;
    rez.preal = a.preal + b.preal;
    rez.pimag = a.pimag + b.pimag;
    return rez;
}
complex prod_c(complex a,complex b){
    complex rez;
    rez.preal = a.preal * b.preal -  a.pimag * b.pimag;
    rez.pimag = a.preal * b.pimag + a.preal * a.pimag;
    return rez;
}
complex rap_c(complex a,complex b){
    //(ac + bd) / (c^2 + d^2) + (bc - ad) / (c^2 + d^2)i
    complex rez;
    rez.preal = (a.preal * b.preal +  a.pimag * b.pimag)/ (b.preal * b.preal + b.pimag * b.pimag);
    rez.pimag = (a.pimag * b.preal - a.preal * b.pimag) / (b.preal * b.preal + b.pimag * b.pimag);
    return rez;
}
void afis_c(complex c){
    cout << c.preal << " + " << c.pimag <<"i";
}
int main()
{
    complex a,b;

    citeste_c(a);
    citeste_c(b);

    cout << "a + b = ";afis_c(sum_c(a,b));
    cout << "\na * b = ";afis_c(prod_c(a,b));
    cout << "\na / b = ";afis_c(rap_c(a,b));

    return 0;
}