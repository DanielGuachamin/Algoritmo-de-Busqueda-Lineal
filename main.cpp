#include <iostream>
#include <fstream>

using namespace std;

int busqueda (int a[], int n, int dato);

int main()
{
  ofstream Archivo_lineal;
  int buscar;
  int a[5]={4,1,3,2,5};
  Archivo_lineal.open("Lineal.txt", ios::out);
  cout << "Ingrese el elemento a buscar: ";
  cin >> buscar;
  for (int i = 0; i < 5; ++i)
  {
    Archivo_lineal << "Arreglo[" << i+1 << "]= " << a[i] << '\n';
  }
  Archivo_lineal << "Elemento a buscar: " << buscar << '\n';
  if (busqueda(a, 5, buscar) == -1)
    {
      cout << "Elemento no encontrado";
      Archivo_lineal << "Elmento no encontrado"<< '\n';
    }
  else
    {
      cout << "Elemento encontrado en la posición: " << busqueda(a, 5 , buscar) + 1;
      Archivo_lineal << "Elemento encontrado en la posición: " << busqueda(a, 5 , buscar) + 1;
    }
  Archivo_lineal.close();
  return 0;
}
int busqueda (int a[], int n, int dato)
{
  for (int i=0 ; i<=n; i++)
  {
    if (a[i] == dato)
    {
      return i;
    }
  }
  return -1;
}