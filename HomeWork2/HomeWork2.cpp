#include <iostream>
using namespace std;
//#include <cmath>

int main()
{
    int first_number;
    int second_number;
    int third_number;

    cout << "1: \n", cin >> first_number;
    cout << "2: \n", cin >> second_number;
    cout << "3: \n", cin >> third_number;

    cout << (first_number + second_number + third_number) / 3;
    

    int number;
    int degree;
    cout << "enter number: \n", cin >> number;
    cout << "enter degree: \n", cin >> degree;
    cout << pow(number, degree);
    

    double R;
    cout << "enter radius: \n", cin >> R;
    const double pi = 3.1415;
    cout << "square of circle: " << pi * pow(R, 2) << "\n";
    cout << "length: " << 2 * pi * R << "\n";
    

    int uah;
    cout << "enter uah: ", cin >> uah;
    float usd;
    usd = uah * 0.027;
    cout << "\nusd: " << usd;
    

    int km;
    cout << "enter km: ", cin >> km;
    cout << km * 0.539957;
    

    int P, S;
    cout << "Enter summ:", cin >> S;
    cout << "Enter percent:", cin >> P;
    cout << "is " << (S / 100) * P;
    

    float temperature;
    cout << "temperature Celsius: ", cin >> temperature, "\n";
    cout << "Fahrenheit: " << (temperature * 9 / 5) + 32 << "\n";
    cout << "Kelvin: " << temperature - 273.15 << "\n";
    cout << "Reaumur: " << temperature * 0.8 << "\n";
 
}

