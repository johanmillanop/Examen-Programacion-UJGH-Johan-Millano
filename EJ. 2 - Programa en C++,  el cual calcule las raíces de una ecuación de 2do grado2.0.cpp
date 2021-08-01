/*2. REALICE UN PROGRAMA, EL CUAL CALCULE LAS RAÍCES DE UNA ECUACIÓN DE 2DO GRADO. EL PROGRAMA DEBE CONTEMPLAR EL MANEJO DE RAÍCES QUE NO SEAN REALES DANDO UN MENSAJE QUE INDIQUE QUE EL PROGRAMA NO CALCULA RAÍCES DE ESE TIPO.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c, d, x, y;

	cout << "Ingrese valor del coeficiente a: ";
	cin >> a;

	while (a == 0) {
		cout << "Ingrese valor del coeficiente a: ";
		cin >> a;
	}

	cout << "Ingrese valor del coeficiente b: ";
	cin >> b;
	cout << "Ingrese valor del coeficiente c: ";
	cin >> c;

	d = b*b-4*a*c;


	if (d > 0) {
		x = (-b+sqrt(d))/(2*a);
		y = (-b-sqrt(d))/(2*a);
		cout << "x1 = " << x << endl;
		cout << "x2 = " << y << endl;
	}
	else{
	     if(d == 0){
            x = -b/2*a;
            cout << "x1 = " << x << endl;
            cout << "Las raices son iguales";
	     }
	     else {
            cout << "Esta ecuacion no tiene solucion, ya que no es posible calcular raices de este tipo";
        }

	}

return 0;
}


