#include <iostream>

using namespace std;

int main() {
    double aprox_pi = 0.0;
    double denominador = 1.0;
    int signo = 1;

    while (aprox_pi < 3.141592 || aprox_pi > 3.141593) {
        aprox_pi += signo * (4.0 / denominador);
        denominador += 2.0;
        signo *= -1;
    }
    cout.precision(6);
    cout << "El valor de pi es: " <<fixed <<aprox_pi <<endl;

    return 0;
}