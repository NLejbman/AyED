#include <iostream>

#include <math.h>

using namespace std;

int main()

{

double aprox_pi = 0; 

int iteraciones = 1000000;/*cambiar el numero para mas precicision*/

for (long int n = 1; n <= iteraciones; n++)

{

aprox_pi+= (double) pow(-1, n+1)/(2*n-1);

}

aprox_pi *= 4;

cout << "Estimacion de PI (" << iteraciones<< " iteraciones): "<< aprox_pi<<endl;

return 0;

}
