#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
	char caracter;
	Nodo *siguiente;
}*inicio, *aux;

void ingresarEnPila (char);

int main()
{
	system("color 3F");
	
	int tamanio;
	char p;
	string expresion, Postorden="";
	
	cout<<"Digite su expresion: ";  cin>>expresion;
	tamanio=expresion.length();
	
	for(int i=0; i<tamanio; i++)
	{
		p=expresion[i];
		if(p='*' || p='/' || p='+' || p='-')
		{
			ingresarEnPila(p);
		}
		else{
			Postorden=+p;
		}
	}
	
	system ("pause");
}

void postOrden(ABoBi arbol)
{
     if(arbol!=NULL)
     {
          postOrden(arbol->izq);
          postOrden(arbol->der);
          cout << arbol->nro << " ";
     }
}
