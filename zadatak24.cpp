#include<iostream>
using namespace std;

class Pravougaonik {
private:
    double duzina;
    double sirina;

public:
    Pravougaonik(double d, double s) : duzina(d), sirina(s) {}

    double povrsina() {
        return duzina * sirina;
    }

    double getDuzina() {
        return duzina;
    }

    double getSirina() {
        return sirina;
    }

    void setDuzina(double d) {
        duzina = d;
    }

    void setSirina(double s) {
        sirina = s;
    }
};

int main() {
    Pravougaonik pravougaonik(5.0, 3.0);

    cout << "Povrsina pravougaonika je: " << pravougaonik.povrsina() << endl;
    cout << "Duzina: " << pravougaonik.getDuzina() << endl;
    cout << "Sirina: " << pravougaonik.getSirina() << endl;

    pravougaonik.setDuzina(7.0);
    pravougaonik.setSirina(4.0);

    cout << "Nova povrsina pravougaonika je: " << pravougaonik.povrsina() << endl;

    return 0;
}
