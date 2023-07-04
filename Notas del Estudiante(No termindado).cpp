#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
	
int opcion=0;
char nombre[35];
cin.getline(nombre,35,'\n');	


while(opcion !=4){
    

cout<<"......MENU....."<<endl;
cout<<"1. Nombre del Estudiante"<<endl;
cout<<"2. Notas y cursos"<<endl;
cout<<"3. Notas Individuales"<<endl;
cout<<"4. Promedio General"<<endl;    
cin>>opcion;     

switch(opcion){
	
	case 1:
	     cout<<"Pon el Nombre y los apellidos del estudiante"<<opcion<<endl;break;
	case 2:
	     cout<<"Ingresar Cursos y Notas"<<opcion<<endl;break;
	case 3:
	     cout<<"Notas Individuales"<<opcion<<endl;break;
	case 4:     
         cout<<"Promedio general"<<endl;


}

}

      
	return 0;
}
