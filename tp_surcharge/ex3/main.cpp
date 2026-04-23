#include "VoitureAutonome.h"

using namespace std;

int main() {
    VoitureAutonome v1(1, 60.0, 120.0);
    VoitureAutonome v2(2, 80.0, 200.0);

    cout << "v1: " << v1 << endl;
    cout << "v2: " << v2 << endl;

	cout << "comparaison v1 et v2 :" << endl;
    if (v1 == v2) {
        cout << "meme vitesse et distance" << endl;
    }
    else {
        cout << "different" << endl;
    }

    if (v1 < v2) {
        cout << "v1 < v2 (vitesse et distance)" << endl;
    }

    VoitureAutonome v3 = v1 + 50.0;
    cout << "v1 + 50: " << v3 << endl;

    cout << "avant ++v1: " << v1 << endl;
    ++v1;
    cout << "apres ++v1 (+ 5): " << v1 << endl;

    return 0;
}
