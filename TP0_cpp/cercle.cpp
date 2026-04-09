#include "cercle.h"
#include <iostream>
#include <cmath>
using namespace std;

Cercle::Cercle(double r, const Point& c){
    this->rayon = r;
    this->centre = c;
}

Cercle::Cercle() : rayon(0), centre(Point()) {}

double Cercle::getRayon() const { return rayon; }
Point Cercle::getCentre() const { return centre; }
void Cercle::setRayon(double r) { rayon = r; }
void Cercle::setCentre(const Point& c) { centre = c; }

void Cercle::affiche() const {
    cout << "Cercle(rayon=" << rayon << ", centre=";
    centre.affiche();
}

double Cercle::surface() const {
    return M_PI * rayon * rayon;
}

double Cercle::perimetre() const {
    return 2 * M_PI * rayon;
}

bool Cercle::comparaison(const Cercle& cer) const {
    return rayon == cer.rayon && centre.comparer(cer.centre);
}

void Cercle::agrandir(double a) {
    rayon += a;
}
