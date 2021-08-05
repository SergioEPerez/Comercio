#include <iostream>

using namespace std;
int CalcularValorVenta(int costo, int stock);
int Ganancia(int costo, int stock);


int main(){ 
	int productos[5][4];
	int CostoTotal = 0, PrecioVentaTotal = 0;


	for (int i = 0; i < 5; i++) {
		cout << "Ingrese valor de compra "<<i+1<<": $";
		cin >> productos[i][0];
		cout << "Ingrese stock "<<i+1<<":";
		cin >> productos[i][1];
		productos[i][3]=Ganancia(productos[i][0], productos[i][1]);
		productos[i][4]= CalcularValorVenta(productos[i][0], productos[i][1]);
		cout << endl;
		cout << endl;
	}

	system("cls");

	for (int i = 0; i < 5; i++) {
		cout << "El costo del producto es:" << productos[i][0] << endl;
		cout << "Stock                   :" << productos[i][1]<<"unid." << endl;
		cout << "Porcentaje de ganancia  :" << productos[i][3] << "%" << endl;
		cout << "Valor Final             :$" << productos[i][4] << endl;
		cout << endl;
		cout << endl;


	}


	
	

	for (int i = 0; i < 5; i++) {
		CostoTotal = CostoTotal + productos[i][0];
		PrecioVentaTotal = PrecioVentaTotal + productos[i][4];
	}



		cout << "El costo total es:" << CostoTotal;
		cout << endl;
		cout << "El precio de venta total es: $" << PrecioVentaTotal;

		return 0;
}

int CalcularValorVenta(int costo, int stock) {
	int PrecioVenta;

	if ((stock >= 100 and costo < 1500) or stock < 50){
		PrecioVenta=((costo*1.15)*1.21);
		return PrecioVenta;
	}else{
		PrecioVenta = ((costo * 1.20) * 1.21);
		return PrecioVenta;
	}

	}

int Ganancia(int costo, int stock) {

	if ((stock >= 100 and costo < 1500) or stock < 50){
		return 15;	
	}else{
		return 20;

	}




}
