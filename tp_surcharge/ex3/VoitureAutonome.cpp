#include "VoitureAutonome.h"

using namespace std;

VoitureAutonome::VoitureAutonome(int id, double vitesse, double distance) {
    this->id = id;
    this->vitesse = vitesse;
    this->distance = distance;
}

bool VoitureAutonome::operator==(const VoitureAutonome& v) const {
    return (this->vitesse == v.vitesse) && (this->distance == v.distance);
}

bool VoitureAutonome::operator!=(const VoitureAutonome& v) const {
    return (this->vitesse != v.vitesse) || (this->distance != v.distance);
}

bool VoitureAutonome::operator<(const VoitureAutonome& v) const {
    return (this->vitesse < v.vitesse) && (this->distance < v.distance);
}

VoitureAutonome VoitureAutonome::operator+(double x) const {
    VoitureAutonome res(this->id, this->vitesse, this->distance);
    res.distance = this->distance + x;
    return res;
}

VoitureAutonome& VoitureAutonome::operator++() {
    this->vitesse = this->vitesse + 5.0;
    return *this;
}

VoitureAutonome VoitureAutonome::operator++(int) {
    VoitureAutonome ancien(this->id, this->vitesse, this->distance);
    this->vitesse = this->vitesse + 5.0;
    return ancien;
}

ostream& operator<<(ostream& out, const VoitureAutonome& v) {
    out << "id: " << v.id << ", vitesse: " << v.vitesse << ", distance: " << v.distance;
    return out;
}
