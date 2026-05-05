#include <iostream>

using namespace std;

class Telo
{
public:
    double masa;
    double povrsina;

    double pritisak()
    {
        double g = 9.81;
        return (masa * g) / povrsina;
    }
};

int main()
{
    Telo t;

    cout << "Unesite masu tela (kg): ";
    cin >> t.masa;

    cout << "Unesite povrsinu oslonca (m^2): ";
    cin >> t.povrsina;

    cout << "Pritisak tela je: " << t.pritisak() << " Pa" << endl;

    return 0;
}
