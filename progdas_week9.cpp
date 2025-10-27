#include <iostream>
#include <cmath> 

using namespace std;
const double PI = 3.1416; // Asumsi nilai PI 

// a. Fungsi distance: Menghitung jarak antara dua titik (x1, y1) dan (x2, y2)
double distance(double x1, double y1, double x2, double y2) {
    double dist = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
    return dist;
}
// b. Fungsi radius: Menghitung radius (jari-jari) lingkaran
double radius(double x_center, double y_center, double x_point, double y_point) {
    double r = distance(x_center, y_center, x_point, y_point);
    return r;
}
// c. Fungsi circumference: Menghitung keliling lingkaran
double circumference(double r) {
    return 2 * PI * r;
}
// d. Fungsi area: Menghitung luas lingkaran
double area(double r) {
    // Menggunakan pow(r, 2) untuk r kuadrat
    return PI * pow(r, 2);
}
int main() {
    double xC, yC, xP, yP, r, d, c, a;
    
    // 1. INPUT
    cout << "--- Program Properti Lingkaran dari Dua Titik ---" << endl;
    cout << "Masukkan koordinat Titik Pusat (x, y): ";
    cin >> xC >> yC;
    cout << "Masukkan koordinat Titik di Lingkaran (x, y): ";
    cin >> xP >> yP;

    // 2. PROSES: Menghitung Radius (r)
    r = radius(xC, yC, xP, yP);

    // 3. PROSES: Menghitung Diameter (d)
    d = 2 * r;
    
    // 4. PROSES: Menghitung Keliling (c)
    c = circumference(r);
    
    // 5. PROSES: Menghitung Luas (a)
    a = area(r);
    
    // 6. OUTPUT
    cout << "\n--- HASIL PERHITUNGAN ---" << endl;
    cout << "Radius (Jari-jari): " << r << endl;
    cout << "Diameter: " << d << endl;
    cout << "Keliling (Circumference): " << c << endl;
    cout << "Luas (Area): " << a << endl;
    
    return 0;
}
