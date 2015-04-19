/*
Ejercicio 1.10
Christian Gelman (Leg 144-087-1)
19-4-2015

Aclaracion: Tal cual como comentaron algunos compañeros en el grupo de yahoo, no logre hacer funcionar el reemplazo del "backspace" para que se visualice en pantalla.
*/
# include <stdio.h>
main ()
{
	int c;
	while ((c = getchar()) != EOF)
	{
		switch (c)
		{
		case '\t': printf("\\t"); break;
		case '\b': printf("\\b"); break;
		case '\\': printf("\\\\"); break;
		default: printf("%c", c);
		}	
	}
}