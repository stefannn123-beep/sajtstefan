#include<iostream>
using namespace std;

class Studije {
public:
    virtual void unosOcena() = 0;
    virtual void ispisOcena() const = 0;
    virtual ~Studije() {}
};

class OsnovneStudije : public Studije {
private:
    float ocene[2];

public:
    void unosOcena() override {
        cout << "Unesite dve ocene za osnovne studije:" << endl;
        for (int i = 0; i < 2; i++) {
            cout << "Unesite ocenu " << i + 1 << ": ";
            cin >> ocene[i];
        }
    }

    void ispisOcena() const override {
        cout << "Ocene za osnovne studije: ";
        for (int i = 0; i < 2; i++) {
            cout << ocene[i] << " ";
        }
        cout << endl;
    }
};

class MasterStudije : public Studije {
private:
    float ocene[3];

public:
    void unosOcena() override {
        cout << "Unesite tri ocene za master studije:" << endl;
        for (int i = 0; i < 3; i++) {
            cout << "Unesite ocenu " << i + 1 << ": ";
            cin >> ocene[i];
        }
    }

    void ispisOcena() const override {
        cout << "Ocene za master studije: ";
        for (int i = 0; i < 3; i++) {
            cout << ocene[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Studije* studije1 = new OsnovneStudije();
    Studije* studije2 = new MasterStudije();

    studije1->unosOcena();
    studije1->ispisOcena();

    studije2->unosOcena();
    studije2->ispisOcena();

    delete studije1;
    delete studije2;

    return 0;
}
