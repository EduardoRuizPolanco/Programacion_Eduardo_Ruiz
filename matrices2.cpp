#include <iostream>

using namespace std;
int main(){

int filas=4;
int columnas=4;
int matriz[filas][columnas];
int sumafilas;
int sumacolumnas;
int f,c;

for(int i=0; i<filas; i++){
for (int j=0; j<columnas; j++){
	cout<<"Ingrese los datos de la matriz en......"<<i<<","<<j<<endl;
	cin>>matriz[i][j];	
}
}
for(int i=0; i<filas; i++){
for(int j=0; j<columnas; j++){	
cout<<matriz[i][j];
cout<<" ";
}
cout<<"\n";
}

cout<<"Aqui estan las filas sumadas"<<endl;

for(int i=0; i<filas; i++){
	

}
	return 0;
}
