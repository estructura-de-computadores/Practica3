#include <stdio.h>

int main ()
{

	int Num;

	printf ("Escriba el numero de un mes: ");

	scanf ("%d",&Num);

	switch (Num){

		case 1: printf ("Enero\n");
			break;
		case 2: printf ("Febrero\n");
			break;
		case 3: printf ("Marzo\n");
			break;
		case 4: printf ("Abril\n");
			break;
		case 5: printf ("Mayo\n");
			break;
		case 6: printf ("Junio\n");
			break;
		case 7: printf ("Julio\n");
			break;
		case 8: printf ("Agosto\n");
			break;
		case 9: printf ("Septiembre\n");
			break;
		case 10:printf ("Octubre\n");
			break;
		case 11:printf ("Noviembre\n");
			break;
		case 12:printf ("Diciembre\n");
			break;
		case 54:printf ("Studio\n");
			break;
		case 101:printf ("Dalmatas\n");
			break;
		case 311:printf ("Celda\n");
			break;
		case 777:printf ("Vegetta\n");
			break;
		default:
			printf ("FATAL ERROR: Number not found\n");
		}
	return 0;
}
