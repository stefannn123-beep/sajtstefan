#include<iostream>
using namespace std;

class Figura {
public:
    virtual void ucitavanje() = 0;
    virtual float povrsina() = 0;
    virtual ~Figura() {}
};

class Krug : public Figura {
private:
    float radius;

public:
    void ucitavanje() override {
        cout << "Unesite poluprecnik kruga: ";
        cin >> radius;
    }

    float povrsina() override {
        return 3.14159f * radius * radius;
    }
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
    Figura* figura1 = new Krug();
    figura1->ucitavanje();
    cout << "Povrsina kruga: " << figura1->povrsina() << endl;

    Figura* figura2 = new Pravougaonik();
    figura2->ucitavanje();
    cout << "Povrsina pravougaonika: " << figura2->povrsina() << endl;

    delete figura1;
    delete figura2;

    return 0;
}
