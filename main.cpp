#include <iostream>
#include <ctime>
#include <fstream>
#include "heapsortlib.h"
using namespace std;
void imprimir(int b[], int n);
void ingresar(int b[], int n);
void ingresotecla(int b[], int n);
int main()
{
  int H[10],op, n;
  ofstream heapsort;
  heapsort.open("heapsort.txt", ios::out);
    cout<<"\t\t\t\tORDENAMIENTO HEAPSORT"<<endl;
    cout<<"\nINGRESE EL TAMAÑO DEL ARREGLO:";
    cin>>n;
    heapsort<<"ARREGLO DE TAMAÑO:"<<n<<endl;
    cout<<"\nMENU\n1.- INGRESAR ELEMENTOS DE FORMA ALEATORIA\n2.- INGRESAR ELEMENTOS DE FORMA MANUAL\n";
    cout<<"OPCION\n";
    cin>>op;
    switch (op){
    case 1:
    {
      ingresar(H, n);
      cout<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      heapsort<<"\nELEMENTOS INGRESADOS\n"<<endl;
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<H[i]<<"|";
      }
      imprimir(H, n); 
      cout<<endl;
      heapsort<<endl;
      cout<<"\n\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl<<endl;
      heapsort<<"\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl;      
      HeapSort(H, n);
      imprimir(H, n);
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<H[i]<<"|";
      }
    }break;
    case 2:
    {
      ingresotecla(H, n);
      cout<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      heapsort<<"\n\nELEMENTOS INGRESADOS\n"<<endl;
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<H[i]<<"|";
      }
      heapsort<<endl;
      imprimir(H, n);
      cout<<endl;
      cout<<"\n\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl<<endl;
      heapsort<<"\nELEMENTOS ORDENADOS POR HEAPSORT\n"<<endl;      
      HeapSort(H, n);
      imprimir(H, n);
      for(int i=1; i<=n; i++)
      {
        heapsort<<"|"<<H[i]<<"|";
      }
    }break;
  heapsort.close();
    }
  return 0;
}

void imprimir(int b[], int n)
{
  for(int i=1; i<=n;i++)
  {
    cout<<"|"<<b[i]<<"|";
  }
}
void ingresar(int a[],int n)
{
  srand(time(0));
  for(int i=1;i<=n;i++)
  {
    a[i]=1+rand()%(10-99);
  }
}
void ingresotecla(int b[], int n)
{
  for(int i=1; i<=n; i++)
  {
    cout<<endl<<"\tELEMENTO ["<<i<<"]:";
    cin>>b[i];
  }
}