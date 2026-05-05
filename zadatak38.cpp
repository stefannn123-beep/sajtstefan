#include<iostream>
#include<cstring>
using namespace std;

class Radnik {
protected:
    char ime[50];
    float osnovnaPlata;

public:

    Radnik() {
        strcpy(ime, "");
        osnovnaPlata = 0.0f;
    }


    void unosPodataka() {
        cout << "Unesite ime radnika: ";
        scanf("%49[^\n]", ime);
        cin.ignore();

        cout << "Unesite osnovnu platu: ";
        cin >> osnovnaPlata;
    }


    void ispisPodataka() const {
        cout << "Ime radnika: " << ime << endl;
        cout << "Osnovna plata: " << osnovnaPlata << " RSD" << endl;
    }
};

class Menadzer : public Radnik {
private:
    float bonus;

public:

    Menadzer() : bonus(0.0f) {}


    void unosPodataka() {
        Radnik::unosPodataka();
        cout << "Unesite bonus: ";
        cin >> bonus;
    }


    float ukupnaPlata() const {
        return osnovnaPlata + bonus;
    }


    void ispisUkupnePlate() const {
        cout << "Ukupna plata (osnovna plata + bonus): " << ukupnaPlata() << " RSD" << endl;
    }
};

int main() {
    Menadzer menadzer1;


    menadzer1.unosPodataka();


    menadzer1.ispisPodataka();
    menadzer1.ispisUkupnePlate();

    return 0;
}
