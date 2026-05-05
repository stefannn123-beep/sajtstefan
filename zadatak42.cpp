#include<iostream>
#include<string>
using namespace std;

class Vozilo {
protected:
    string nazivVozila;
    int godinaProizvodnje;

public:
    Vozilo() : nazivVozila(""), godinaProizvodnje(0) {}

    void ucitaj() {
        cout << "Unesite naziv vozila: ";
        getline(cin, nazivVozila);

        cout << "Unesite godinu proizvodnje: ";
        cin >> godinaProizvodnje;
        cin.ignore();
    }

    void ispis() const {
        cout << "Naziv vozila: " << nazivVozila << endl;
        cout << "Godina proizvodnje: " << godinaProizvodnje << endl;
    }
};

class Automobil : public Vozilo {
private:
    int brojVrata;
    float cena;

public:
    Automobil() : brojVrata(0), cena(0.0f) {}

    void ucitaj() {
        Vozilo::ucitaj();
        cout << "Unesite broj vrata: ";
        cin >> brojVrata;

        cout << "Unesite cenu: ";
        cin >> cena;
    }

    void uticaj() const {
        if (cena > 100000) {
            cout << "Ovaj automobil je veoma skup!" << endl;
        } else {
            cout << "Ovaj automobil je pristupacne cene." << endl;
        }
    }

    void ispis() const {
        Vozilo::ispis();
        cout << "Broj vrata: " << brojVrata << endl;
        cout << "Cena: " << cena << " RSD" << endl;
        uticaj();
    }
};

int main() {
    Automobil automobil;

    automobil.ucitaj();
    automobil.ispis();

    return 0;
}
