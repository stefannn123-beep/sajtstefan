#include<iostream>
using namespace std;

class BankovniRacun {
protected:
    float stanje;

public:
    BankovniRacun() : stanje(0.0f) {}

    void definisiPocetnoStanje(float pocetnoStanje) {
        stanje = pocetnoStanje;
    }

    void uplata(float iznos) {
        stanje += iznos;
    }

    void ispisStanja() const {
        cout << "Trenutno stanje na bankovnom racunu: " << stanje << " RSD" << endl;
    }

    float getStanje() const {
        return stanje;
    }
};

class DevizniRacun : public BankovniRacun {
private:
    float kurs;

public:
    DevizniRacun() : kurs(1.0f) {}

    void definisiKurs(float noviKurs) {
        kurs = noviKurs;
    }

    void ispisStanjaEUR() const {
        float stanjeEUR = stanje / kurs;
        cout << "Trenutno stanje na deviznom racunu: " << stanjeEUR << " EUR" << endl;
    }
};

int main() {
    BankovniRacun bankovniRacun;
    DevizniRacun devizniRacun;

    float pocetnoStanje;
    cout << "Unesite pocetno stanje na bankovnom racunu: ";
    cin >> pocetnoStanje;
    bankovniRacun.definisiPocetnoStanje(pocetnoStanje);

    cout << "Unesite pocetno stanje na deviznom racunu: ";
    cin >> pocetnoStanje;
    devizniRacun.definisiPocetnoStanje(pocetnoStanje);

    float kurs;
    cout << "Unesite kurs za devizni racun: ";
    cin >> kurs;
    devizniRacun.definisiKurs(kurs);

    float uplataIznos;
    while (true) {
        cout << "Unesite iznos uplate (0 za kraj): ";
        cin >> uplataIznos;
        if (uplataIznos == 0) break;

        bankovniRacun.uplata(uplataIznos);
        devizniRacun.uplata(uplataIznos);

        bankovniRacun.ispisStanja();
        devizniRacun.ispisStanjaEUR();
    }

    return 0;
}
