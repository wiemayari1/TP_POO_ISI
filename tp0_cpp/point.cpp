#include "point.h"
#include <iostream>
#include <cmath>
using namespace std;

Point::Point(double x, double y, char nom) {
    this->x = x;
    this->y = y;
    this->nom = nom;
}
Point::Point() : x(0), y(0), nom('O') {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
char Point::getNom() const { return nom; }

void Point::setX(double x) { this->x = x; }
void Point::setY(double y) { this->y = y; }
void Point::setNom(char nom) { this->nom = nom; }

void Point::affiche() const {
    cout << nom << "(" << x << ", " << y << ")" << endl;
}

void Point::translation(double tx, double ty) {
    x += tx; 
    y += ty;
}

Point Point::milieu(const Point& p) const {
    return Point((x + p.x) / 2, (y + p.y) / 2, 'M');
}

Point Point::symetrique() const {
    return Point(-x, -y, nom);
}

double Point::distance(const Point& p) const {
    return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
}

bool Point::comparer(const Point& p) const {
    return x == p.x && y == p.y;
}
