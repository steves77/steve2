#include <iomanip>
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;
using std::cerr;
using std::sqrt;

void leeCadena(char*,int);
void compara(char*,char*,int,int*);

int main(int argc, char*argv[]){
	char* numeroAzar=NULL;
	char* numeroUsua=NULL;
	int* contador=NULL;
	numeroAzar=new char[5];
	numeroUsua=new char[5];
	contador= new int[3];

	do{
		int opcion=0;
		cout<<"1-mente maestra\n2-Polinomio\n\n seleccione correctamente"<<endl;
		cin>>opcion;
		if (opcion==1)
		{	
			

			for (int i = 0; i < 6; ++i)
			{	
				if (i==0)
				{
					cout<<"ingresa el numero escondido"<<endl;
					cout<<"ingrese numero: ";
					cin>>numeroAzar;
					cout<<numeroAzar<<endl;
				}
				cout<<"SOlo tienes "<<5-i<<" intentos"<<endl;

				cout<<"ingrese numero: ";
				cin>>numeroUsua;
				cout<<numeroUsua<<endl;

				compara(numeroUsua,numeroAzar,5,contador);
				//para saber si has ganado
				cout<<"numeros encontrados :"<<contador[0]-1<<endl;
				cout<<"numeros encontrados en correctas posiciones :"<<contador[1]-1<<endl;
				if (contador[0]==5 && contador[1]==5)
				{
				cout<<"has encontrado la contrasenia correcta"<<endl;
				cout<<"clave al azar :"<<numeroAzar<<endl;
				cout<<"clave tuya:"<<numeroUsua<<endl;

				break;
				}
				
			}
			
		}else if (opcion==2)
		{
				float a=0,b=0,c=0;
				float x1=0,x2=0;
				float t=0;
				
				cout<<"Ingrese el coeficiente de 2do Grado: ";
				cin>>a;
				cout<<"Ingrese el coeficiente de 1er Grado ";
				cin>>b;
				cout<<"Ingrese el coeficiente independiente";
				cin>>c;
				
				x1=(-b+sqrt(b*b-4*a*c))/(2*a);
				x2=(-b+sqrt(b*b-4*a*c))/(2*a);
				cout<<"el resultado es: "<<a<< "x^2+"<<b<<"x+"<<c<<"= : \n"<< "(x+"<<x1<<")(x"<<x2<<")" << endl;
		}else break;



	}while(1);

	
	delete[] contador;
	delete[] numeroAzar;
	delete[] numeroUsua;
	
	return 0;
}
	

void compara(char* cadenausuario,char* cadenaazar,int size,int* contador){
	contador[0]=0;
	contador[1]=0;
	for (int j = 0; j < size; ++j)
	{
		for (int i = 0; i < size; ++i)
		{
			if (cadenaazar[j]==cadenausuario[i])
			{
				contador[0]++;
			}
		}
		if (cadenaazar[j]==cadenausuario[j])
			{
				contador[1]++;			}
	}



}
