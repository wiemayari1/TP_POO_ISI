#ifndef CERCLE_H
#define CERCLE_H

#include "point.h"

class Cercle {

public:
    Cercle(double r, const Point& c);
    Cercle();

    double getRayon() const;
    Point getCentre() const;
    void setRayon(double r);
    void setCentre(const Point& c);

    void affiche() const;
    double surface() const;
    double perimetre() const;
    bool comparaison(const Cercle& cer) const;
    void agrandir(double a);

private:
    double rayon;
    Point centre;
};

#endif
