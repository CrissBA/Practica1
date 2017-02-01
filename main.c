#include <stdio.h> //Cabeceras de Librerias
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




/*Función:
	Es un conjunto de instrucciones
	
	Las funciones tienen la siguiente estructura:
		
		int 					main				(int argc, char *argv[]) 
		 ^						^							Parámetros
		 |						|
	Tipo de variable         Nombre de
	que retorna				 la función

Variable de retorno: Es un valor que devuelve la función, cuando se ha terminado 
de ejecutar. Puede indicar que ya terminó de ejecutarse, o arrojar información
del proceso que se ejecutó.
Puedes retornar cualquier tipo de variable, o no retornar nada.

Así se declara una función que no retorna nada:
	
void Función1(Parametros);

Si no se necesitan parametros en la función:

void Función2(void);	

Parámetros: Son datos que se ingresan a la función.

Variables:
	
	Tipos
	int 		Números enteros
	char		Caracteres alfanuméricos
	float		Números con punto decimal (punto flotante)
	long		Números enteros (muy grandes)
	boolean		Valores true = 1 ó false = 0
	
	Una variable puede ser:
	unsigned 	Sin signo
	signed		Con signo
	
	Alcance de variable:
	const	Constante
	static 	Estática
	

Para imprimir una variable en pantalla:
	%i	ó %d	Números enteros
	%c			Caracteres alfanuméricos
	%s			String
	%f			Números flotantes
	
	
Array o arreglo:
	
	Cadena de caracteres (char)
	
	char Letras[5] ={'w', 'q', 'a', 'e', 'a'} ;
				|______ Número de elementos del arreglo
	
	char Nombre[5] = {"Kriss"};	
	int Numeros[3]{8, 9, 56};
	int Matriz[3,3]
	
	Cuando se quiere invocar un elemento del arreglo, se coloca la posición.
	La posición de un arreglo comienza con 0.
*/

int Numero1 = 5;
int Numero2 = 3;
char Letra	= 'F';
float PuntoDecimal = 1.23;
int Resultado;
char Letras[5] = {'w', 'q', 'a', 'e', 'a'} ;
char Nombre[5] = {"Kriss"};
int Numeros[3] = {8, 9, 56};
char Cadena;

int 	Suma(int A, int B);
int 	Resta(int A, int B);
void 	Rutina(void);

int main(int argc, char *argv[]) // Es la función principal
{
	Rutina();	
	return 0;
}

void Rutina(void)
{
	printf("Hola Mundo\n");		// Es la función que imprime en pantalla
	Resultado = Suma(Numero1, Numero2);
	printf("%d\n", Resultado);
	printf("%c\n", Letra);
	printf("%.2f\n", PuntoDecimal	);
	Resultado = Resta(Numero1, Numero2);
	printf("%d\n", Resultado);
	printf("%c\n", Letra);
	printf("%s\n", Nombre);
	printf("%i\n\n", Numeros[2]);

	printf("Escribe algo: ");
	scanf("%c", &Cadena);	//Es la función  para capturar información de la pantalla
	printf("Lo que escribiste fue: %c\n", Cadena);
	// El '&' Te indica la dirección de la variable
}

int Suma(int A, int B)
{
	return(A+B);
}

int Resta (int A, int B)
{
	return(A-B);
}
