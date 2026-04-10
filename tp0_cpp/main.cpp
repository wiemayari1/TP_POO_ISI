#include <iostream>
#include "point.h"
#include "cercle.h"
using namespace std;

int main() {
    cout << "Point" << endl;
    Point p1(3.0, 4.0, 'A');
    Point p2;
    p1.affiche();
    p2.affiche();
    p1.translation(2.0, 3.0);
    cout << "A aprés translation de (2.0, 3.0) : "; p1.affiche();
    Point m = p2.milieu(p1);
    cout << "Milieu de O et A: "; m.affiche();
    Point s = p1.symetrique();
    cout << "Symétrique de A: "; s.affiche();
    cout << "Distance O et A: " << p1.distance(p2) << endl;

    Point p3(3.0, 4.0, 'C');

    cout << "est ce que A et C sont égaux?  " << (p1.comparer(p3) ? "Oui" : "Non") << endl;

    cout << "    "  << endl;
    cout << "cercle" << endl;


    Cercle c1(5.0, p2);
    Cercle c2;
    cout << "c1: "; c1.affiche();
    cout << "c2: "; c2.affiche();
    cout << "Surface c1= " << c1.surface() << endl;
    cout << "Perimetre c1= " << c1.perimetre() << endl;
    Cercle c3(5.0, p2);
    cout << "c3: "; c3.affiche();
    cout << "est ce que C1 et C3 sont égaux ? " << (c1.comparaison(c3) ? "Oui" : "Non") << endl;
    c1.agrandir(2.0);
    cout << "c1 apres agrandir de (2,0): "; c1.affiche()<<")";



}
