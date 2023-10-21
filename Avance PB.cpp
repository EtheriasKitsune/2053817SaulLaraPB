#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string.h>

using namespace std;

struct Ticket
{
	string nombredelcliente;
	string comida;
	int pedido = 0, pedido2 = 0, pedido3 = 0, pedido4 = 0, pedido5 = 0, pedido6 = 0;
	int precio = 0, precio2 = 0, precio3 = 0, precio4 = 0, precio5 = 0, precio6 = 0;
	int Total = 0;
};


int main()
{
	Ticket restaurante[3];

	int op;
	int precio = 0, precio2 = 0, precio3 = 0, precio4 = 0, precio5 = 0, precio6 = 0;
	int Total = 0;

	do
	{
		printf("ingrese la opcion deseada \n 1. Alta de Ordenes \n 2. Modificar Orden \n 3. Eliminar o Cancelar Orden \n 4. Lista de Ordenes \n 5. Limpiar pantalla \n 6. Salir \n");
		scanf_s("%i", &op);

		switch (op)
		{
		case 1: //Alta//
		{
			cin.ignore();
			for (int i = 0; i < 3; i++)
			{
				cout << "usted tiene el ticket: " << i << endl;
				printf("Ingrese el nombre del cliente: \n");
				getline(cin, restaurante[i].nombredelcliente);
				printf("Que desea ordenar: \n");
				do
				{
					printf(" 1. Tacos........$90 \n 2. Hamburguesa........$70 \n 3. Gringa........$100 \n 4. Campechana........$100 \n 5. Papa Asada........$90 \n 6. Refresco........$20 \n");
					/*getline(cin, restaurante[i].comida);*/
					scanf_s("%i", &op);
					switch (op)
					{
					case 1: //Tacos//
					{
						printf("cuantas ordenes desea? \n");
						scanf_s("%i", &restaurante[i].pedido);
						cin.ignore();

						break;
					}
					case 2: //Hamburguesa
					{
						printf("cuantas desea? \n");
						scanf_s("%i", &restaurante[i].pedido2);
						cin.ignore();
						break;
					}
					case 3: //Gringa//
					{
						printf("cuantas desea? \n");
						scanf_s("%i", &restaurante[i].pedido3);
						cin.ignore();
						break;
					}
					case 4: //Campechana//
					{
						printf("cuantas desea? \n");
						scanf_s("%i", &restaurante[i].pedido4);
						cin.ignore();
						break;
					}
					case 5: //Papa Asada//
					{
						printf("cuantas desea? \n");
						scanf_s("%i", &restaurante[i].pedido5);
						cin.ignore();
						break;
					}
					case 6: //refresco//
					{
						printf("cuantos desea? \n");
						scanf_s("%i", &restaurante[i].pedido6);
						cin.ignore();
						break;
					}
					default:
						break;
					}
					printf("desea agregar algo mas? \n");
					printf("1. Si ");
					printf("2. No \n");
					scanf_s("%i", &op);
					cin.ignore();
				} while (op == 1);
			}
			break;
		}
		case 2: //Modificar Orden//
		{

		}
		case 3: //Cancelar o Eliminar Orden//
		{

		}
		case 4: //Lista de Ordenes//
		{
			for (int i = 0; i < 1; i++)
			{
				for (int i = 0; i < 3; i++)
				{
					Total = 0;
					cout << "Ticket numero " << i << endl;
					cout << restaurante[i].nombredelcliente << endl;
					if (restaurante[i].pedido > 0)
					{
						precio = 0;
						precio = restaurante[i].pedido * 90;
						cout << restaurante[i].pedido << " Tacos " << "............" << precio << endl;
						Total = precio;
		
					}
					if (restaurante[i].pedido2 > 0)
					{
						precio2 = 0;
						precio2 = restaurante[i].pedido2 * 70;
						cout << restaurante[i].pedido2 << " Hambuerguesa " << "............" << precio2 << endl;
						Total = Total + precio2;
					}
					if (restaurante[i].pedido3 > 0)
					{
						precio3 = 0;
						precio3 = restaurante[i].pedido3 * 100;
						cout << restaurante[i].pedido3 << " Gringa " << "............" << precio3 << endl;
						Total = Total + precio3;
					}
					if (restaurante[i].pedido4 > 0)
					{
						precio4 = 0;
						precio4 = restaurante[i].pedido4 * 100;
						cout << restaurante[i].pedido4 << " Campechana " << "............" << precio4 << endl;
						Total = Total + precio4;
					}
					if (restaurante[i].pedido5 > 0)
					{
						precio5 = 0;
						precio5 = restaurante[i].pedido5 * 90;
						cout << restaurante[i].pedido5 << " Papa Asada " << "............" << precio5 << endl;
						Total = Total + precio5;
					}
					if (restaurante[i].pedido6 > 0)
					{
						precio6 = 0;
						precio6 = restaurante[i].pedido6 * 20;
						cout << restaurante[i].pedido6 << " Refresco " << "............" << precio6 << endl;
						Total = Total + precio6;
					}
					cout << " Su total es de" << "............" << Total << endl;
				}

			}
			break;
		}
		case 5: //Limpiar pantalla//
		{
			system("cls");
		}
		case 6: //Salir//
		{

		}
		default:
			op = 7;
			printf("la opcion es incorrecta \n");
			break;
		}
	} while (op >= 1 || op <= 5);

}