#include<iostream>
#include<string>
using namespace std;

class Vozilo {
private:
    string nazivVozila[30];
    int godinaProizvodnje[30];
    int brojVozila;

public:
    Vozilo() : brojVozila(0) {}

    void ucitaj() {
        cout << "Unesite broj vozila: ";
        cin >> brojVozila;
        cin.ignore();

        for (int i = 0; i < brojVozila; i++) {
            cout << "Unesite naziv " << i + 1 << ". vozila: ";
            getline(cin, nazivVozila[i]);

            cout << "Unesite godinu proizvodnje za " << nazivVozila[i] << ": ";
            cin >> godinaProizvodnje[i];
            cin.ignore();
        }
    }

    void ispis() const {
        cout << "\nEvidencija vozila:\n";
        for (int i = 0; i < brojVozila; i++) {
            cout << "Vozilo " << i + 1 << ": " << nazivVozila[i]
                 << ", Godina proizvodnje: " << godinaProizvodnje[i] << endl;
        }
    }
};

int main() {
    Vozilo vozila;

    vozila.ucitaj();
    vozila.ispis();

    return 0;
}
