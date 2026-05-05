#include<iostream>
using namespace std;

class Figura {
public:
    virtual void ucitavanje() = 0;
    virtual float povrsina() = 0;
    virtual ~Figura() {}
};

class Pravougaonik : public Figura {
private:
    float duzina, sirina;

public:
    void ucitavanje() override {
        cout << "Unesite duzinu pravougaonika: ";
        cin >> duzina;
        cout << "Unesite sirinu pravougaonika: ";
        cin >> sirina;
    }

    float povrsina() override {
        return duzina * sirina;
    }
};

int main() {
    Figura* pravougaonik = new Pravougaonik();
    pravougaonik->ucitavanje();
    cout << "Povrsina pravougaonika: " << pravougaonik->povrsina() << endl;

    delete pravougaonik;

    return 0;
}
