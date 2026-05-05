#include<iostream>
using namespace std;

class BankovniRacun {
private:
    float stanje;

public:
    BankovniRacun() : stanje(0.0f) {}

    void definisiPocetnoStanje(float pocetnoStanje) {
        stanje = pocetnoStanje;
    }

    void ispisStanja() const {
        cout << "Trenutno stanje na bankovnom racunu: " << stanje << " RSD" << endl;
    }
};

int main() {
    BankovniRacun racun;

    float pocetnoStanje;
    cout << "Unesite pocetno stanje na bankovnom racunu: ";
    cin >> pocetnoStanje;

    racun.definisiPocetnoStanje(pocetnoStanje);

    racun.ispisStanja();

    return 0;
}
