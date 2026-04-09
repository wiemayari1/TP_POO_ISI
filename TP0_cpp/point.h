#ifndef POINT_H
#define POINT_H

class Point {

public:
    Point(double x, double y, char nom);
    Point();
    double getX() const;
    double getY() const;
    char getNom() const;
    void setX(double x);
    void setY(double y);
    void setNom(char n);
    void affiche() const;
    void translation(double tx, double ty);
    Point milieu(const Point& p) const;
    Point symetrique() const;
    double distance(const Point& p) const;
    bool comparer(const Point& p) const;

private:
    double x, y;
    char nom;
};

#endif
