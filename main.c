#include <stdio.h> //Cabeceras de Librerias
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */




/*Funci�n:
	Es un conjunto de instrucciones
	
	Las funciones tienen la siguiente estructura:
		
		int 					main				(int argc, char *argv[]) 
		 ^						^							Par�metros
		 |						|
	Tipo de variable         Nombre de
	que retorna				 la funci�n

Variable de retorno: Es un valor que devuelve la funci�n, cuando se ha terminado 
de ejecutar. Puede indicar que ya termin� de ejecutarse, o arrojar informaci�n
del proceso que se ejecut�.
Puedes retornar cualquier tipo de variable, o no retornar nada.

As� se declara una funci�n que no retorna nada:
	
void Funci�n1(Parametros);

Si no se necesitan parametros en la funci�n:

void Funci�n2(void);	

Par�metros: Son datos que se ingresan a la funci�n.

Variables:
	
	Tipos
	int 		N�meros enteros
	char		Caracteres alfanum�ricos
	float		N�meros con punto decimal (punto flotante)
	long		N�meros enteros (muy grandes)
	boolean		Valores true = 1 � false = 0
	
	Una variable puede ser:
	unsigned 	Sin signo
	signed		Con signo
	
	Alcance de variable:
	const	Constante
	static 	Est�tica
	

Para imprimir una variable en pantalla:
	%i	� %d	N�meros enteros
	%c			Caracteres alfanum�ricos
	%s			String
	%f			N�meros flotantes
	
	
Array o arreglo:
	
	Cadena de caracteres (char)
	
	char Letras[5] ={'w', 'q', 'a', 'e', 'a'} ;
				|______ N�mero de elementos del arreglo
	
	char Nombre[5] = {"Kriss"};	
	int Numeros[3]{8, 9, 56};
	int Matriz[3,3]
	
	Cuando se quiere invocar un elemento del arreglo, se coloca la posici�n.
	La posici�n de un arreglo comienza con 0.
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

int main(int argc, char *argv[]) // Es la funci�n principal
{
	Rutina();	
	return 0;
}

void Rutina(void)
{
	printf("Hola Mundo\n");		// Es la funci�n que imprime en pantalla
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
	scanf("%c", &Cadena);	//Es la funci�n  para capturar informaci�n de la pantalla
	printf("Lo que escribiste fue: %c\n", Cadena);
	// El '&' Te indica la direcci�n de la variable
}

int Suma(int A, int B)
{
	return(A+B);
}

int Resta (int A, int B)
{
	return(A-B);
}
