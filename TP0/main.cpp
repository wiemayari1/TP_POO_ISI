#include <iostream>
#include "Point.h"
#include "Cercle.h"
using namespace std;

int main() {
    cout << "Point" << endl ;
    Point p1(3.0, 4.0, 'A');  
    Point p2;                   
    p1.affiche();
    p2.affiche();
    p1.translation(2.0, 3.0);
    cout << "A aprés translation: "; p1.affiche() << endl;
    Point m = p2.milieu(p1);
    cout << "Milieu de O et A: "; m.affiche() << endl;
    Point s = p1.symetrique();
    cout << "Symétrique de A: "; s.affiche() << endl;
    cout << "Distance O et A: " << a.distance(b) << endl;
   
    Point p3(3.0, 4.0, 'C');
 
    cout << "est ce que p1 et p3 sont égaux?  " << (p1.comparer(p3) ? "Oui" : "Non") << endl;

    cout <<"cercle"<< endl;

    
    Cercle c1(5.0, p2);
    Cercle c2;
    cout << "c1: "; c1.affiche();
    cout << "c2: "; c2.affiche();
    cout << "Surface c1= " << c1.surface() << endl;
    cout << "Perimetre c1= " << c1.perimetre() << endl;
    Cercle c3(5.0, p2);
    cout << "est ce que p1 et p3 sont égaux ? " << (c1.comparaison(c3) ? "Oui" : "Non") << endl;
    c1.agrandir(2.0);
    cout << "c1 apres agrandir : "; c1.affiche();



}