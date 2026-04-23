#ifndef VOITURE_AUTONOME_H
#define VOITURE_AUTONOME_H

#include <iostream>

class VoitureAutonome {
private:
    int id;
    double vitesse;
    double distance;

public:
    VoitureAutonome(int id, double vitesse, double distance);

    bool operator==(const VoitureAutonome& v) const;
    bool operator!=(const VoitureAutonome& v) const;
    bool operator<(const VoitureAutonome& v) const;

    VoitureAutonome operator+(double x) const;

    VoitureAutonome& operator++();
    VoitureAutonome operator++(int);

    friend std::ostream& operator<<(std::ostream& out, const VoitureAutonome& v);
};

#endif
