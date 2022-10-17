#include <iostream>

using namespace std;

int main()
{
    float r, t, lt, vt, ll;
    float phi = 3.14;

    cout << "Menghitung Luas Lingkaran & Volume Tabung" << endl;
    cout << endl;
    cout << "Masukan Jari-jari : ";
    cin >> r;
    cout << "Masukan Tinggi    : ";
    cin >> t;

    lt = (2 * phi * r * (r + t));
    vt = (phi * t * (r * r));
    ll = phi * r * r;

    cout << endl;
    cout << "Luas Lingkaran	: " << ll << endl;
    cout << "Luas Tabung	: " << lt << endl;
    cout << "Volume Tabung	: " << vt << endl;
}